<?php
SESSION_START();
if ($_SESSION["usuario"]) {
    $us = $_SESSION["usuario"];

?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Inserir cliente Sapataria</title>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, intial-scale=1.0">
    <link rel="icon" href="../../../img/sapato_icon.ico" />
    <link rel="stylesheet" type="text/css" href="../../../css/Estilo.css" />
    <link href="https://fonts.googleapis.com/css2?family=Sansita+Swashed:wght@300&display=swap" rel="stylesheet">
</head>

<body>
    <nav>
        Perfil:<?php echo " " . $us ?><br>
        <a href="../../fimsessao.php">Sair</a>
        <hr>
    </nav>
    <div class="container">
    <?php
    if ($_POST['cxNome'] != "") {
        include_once '../conexao.php';

        $nome = $_POST['cxNome'];
        $usuario = strtolower($_POST['cxUser']);
        $senha = md5($_POST['cxSenha']);
        $sql = "insert into tbcliente(nome_cliente,usuario,senha)
    values('$nome','$usuario','$senha');";

        $query = mysqli_query($conn, $sql);

        echo 'Dados cadastrados com sucesso!';
    } else {
        echo "Dados não cadastrados";
    }
    ?>
    
    <br>
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