<?php
    SESSION_START();
    if ($_SESSION["usuario"]) {
        $us = $_SESSION["usuario"];
    
?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Lista clientes da Sapataria</title>
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
Perfil:<?php echo " ".$us ?><br>
  <a href="../fimsessao.php">Sair</a>
  <hr> 
    </nav>
<div class="container">

<?php
    $consulta = "select * from tbcliente;";
    $executar = mysqli_query($conn,$consulta);
    while ($linha = mysqli_fetch_array($executar)) {
    ?>
    <div id="cx1">
    Código: <input type="text" value="<?php echo $linha['codcliente'];?>" readonly/><br>
    Nome: <input type="text" value="<?php echo $linha['nome_cliente'];?>" readonly/><br>
    Usuario: <input type="text" value="<?php echo $linha['usuario'];?>" readonly/><br>
    Senha(encriptada): <input type="text" size=64 value="<?php echo $linha['senha'];?>" readonly/><br>
    <br>
    <hr>
    </div>
    <?php } ?>
    <a href="../../fonte/mancliente.php">Voltar</a>
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