<?php
SESSION_START();
if ($_SESSION["usuario"]) {
    $us = $_SESSION["usuario"];

?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Buscando por nome Cliente Sapataria</title>
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

            $consulta = "select * from tbcliente where nome_cliente LIKE '%$nomeBuscado%';";

            $executar = mysqli_query($conn, $consulta);

            $resultado = mysqli_num_rows($executar);

            if ($resultado != 0) {
                echo "<script>alert('Cliente localizado');</script>";
            } else {
                echo "<script>alert('Cliente não localizado');
        window.location.href = '../../fonte/index.php'
        </script>";
            }

            while ($linha = mysqli_fetch_array($executar)) {
            ?>
        <form action="alterarcliente.php" method="POST">
            <div id="cx1">
                Código: <input type="text" name="cxcod" value="<?php echo $linha['codcliente'] ?>" readonly /><br>
                Nome: <input type="text" name="cxno" value="<?php echo $linha['nome_cliente'] ?>" /><br>
                Usuário: <input type="text" name="cxuser" value="<?php echo $linha['usuario'] ?>" /><br>
                Senha(Encriptada) <input type="text" name="cxsenha" value="<?php echo $linha['senha'] ?>" /><br>
                <br>
                <button type="submit">
                    <img src="../../../img/bloco.png" width="70" height="60">
                </button>
        </form>
        <!---->
        <a href="excluircliente.php?id=<?php echo $linha['codcliente']; ?>">
            <img src="../../../img/lixeira.png" width="70" height="60">
        </a>
        <hr>
    </div>
    <?php } ?>
    
    <a href="../../fonte/mancliente.php">Voltar</a>
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