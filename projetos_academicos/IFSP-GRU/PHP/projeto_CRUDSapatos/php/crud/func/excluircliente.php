<?php
    SESSION_START();
    if ($_SESSION["usuario"]) {
        $us = $_SESSION["usuario"];
    
?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Excluir cliente Sapataria</title>
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

include_once "../conexao.php";

$cod = $_GET["id"];

$excluir = "delete from tbcliente where codcliente = '$cod'";
$query = mysqli_query($conn,$excluir);
if ($query) {
    echo "Dados excluidos com sucesso!";
    echo "<br>";
    echo "<a href='../../fonte/mancliente.php'>Voltar</a>";
}
else{
    echo "Dados não excluidos!";
    echo "<br>";
    echo "<a href='../../fonte/mancliente.php'>Voltar</a>";

}
?>
    </div>
</body>

</html>
<?php
}
else {
    echo"
    <script>
    window.location.href='../../fonte/index.php';
    </script>
    ";
}

?>