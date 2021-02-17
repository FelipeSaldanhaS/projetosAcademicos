<?php
SESSION_START();
if ($_SESSION["usuario"]) {
    $us = $_SESSION["usuario"];

?>
    <!DOCTYPE html>
    <html lang="pt-br">

    <head>
        <title>Buscando por nome Produto Sapataria</title>
        <meta charset="UTF-8" />
        <meta name="viewport" content="width=device-width, intial-scale=1.0">
        <link rel="icon" href="../../../img/sapato_icon.ico" />
        <link rel="stylesheet" type="text/css" href="../../../css/Estilo.css" />
        <link href="https://fonts.googleapis.com/css2?family=Sansita+Swashed:wght@300&display=swap" rel="stylesheet">
        <?php
        include_once '../conexao.php';
        ?>
    </head>

    <body>
        <nav>
            Perfil:<?php echo " " . $us ?><br>
            <a href="../../fimsessao.php">Sair</a>
            <hr>
        </nav>
        <div class="container">

            <?php
            $nomeBuscado = $_POST["cxBuscaNome"];

            $consulta = "select * from tbproduto where nome LIKE '%$nomeBuscado%';";

            $executar = mysqli_query($conn, $consulta);

            $resultado = mysqli_num_rows($executar);

            if ($resultado != 0) {
                echo "<script>alert('Produto localizado');</script>";
            } else {
                echo "<script>alert('Produto não localizado');
        window.location.href = '../../fonte/index.php'
        </script>";
            }

            while ($linha = mysqli_fetch_array($executar)) {
            ?>
                <form action="alterarprod.php" method="POST">
                    <div id="cx1">
                        Código: <input type="text" name="cxcod" value="<?php echo $linha['codprod'] ?>" readonly /><br>
                        Nome: <input type="text" name="cxno" value="<?php echo $linha['nome'] ?>" /><br>
                        Descrição:<br> <textarea rows=3 cols=120 name="cxdesc"><?php echo $linha['descricao']; ?></textarea><br>
                        <br>
                        <button type="submit">
                            <img src="../../../img/bloco.png" width="70" height="60">
                        </button>
                </form>
                <!---->
                <a href="excluirprod.php?id=<?php echo $linha['codprod']; ?>">
                    <img src="../../../img/lixeira.png" width="70" height="60">
                </a>
                <hr>
        </div>
    <?php } ?>

    <a href="../../fonte/manprod.php">Voltar</a>
    </div>
    </body>

    </html>
<?php
} else {
    echo "
    <script>
    window.location.href='../../fonte/index.php';
    </script>
    ";
}

?>