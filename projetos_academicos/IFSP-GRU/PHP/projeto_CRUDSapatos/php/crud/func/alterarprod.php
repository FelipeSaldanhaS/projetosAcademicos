<?php
    SESSION_START();
    if ($_SESSION["usuario"]) {
        $us = $_SESSION["usuario"];
    
?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Alterar produto Sapataria</title>
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

include_once '../conexao.php';

$cod = $_POST['cxcod'];
$nome = $_POST['cxno'];
$desc = ($_POST['cxdesc']);

$update = "update tbproduto set nome = '$nome', descricao= '$desc'
where codprod = '$cod'";
$query = mysqli_query($conn,$update);

if($query){
    echo "Dados alterados com sucesso!";
    echo "<br>";
    echo "<a href='../../fonte/manprod.php'>Voltar</a>";
}
else{
    echo "Dados não alterados!";
    echo "<br>";
    echo "<a href='../../fonte/manprod.php'>Voltar</a>";
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