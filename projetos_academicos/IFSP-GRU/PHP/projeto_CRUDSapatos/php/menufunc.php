<?php
    SESSION_START();
    if ($_SESSION["usuario"]) {
        $us = $_SESSION["usuario"];
    
?>

<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, intial-scale=1.0">
    <link rel="icon" href="../img/sapato_icon.ico" />
    <link rel="stylesheet" type="text/css" href="../css/Estilo.css" />
    <link href="https://fonts.googleapis.com/css2?family=Sansita+Swashed:wght@300&display=swap" rel="stylesheet">
    <title>Menu Sapataria-Funcionario</title>
</head>

<body>
    <div class="container">
    <h1>Menu Principal do Funcionário</h1>
    Perfil:
    <?php
    echo " ",$us;
    ?><br>
    <hr>
    <h3><a href="fonte/mancliente.php">Manutenir Clientes</a></h3>
    <hr>
    <h3><a href="fonte/manfunc.php">Manutenir Funcionários</a></h3>
    <hr>    
    <h3><a href="fonte/manprod.php">Manutenir Produtos</a></h3>
    <hr>
    <a href="fimsessao.php">Sair</a>
    </div>
    <footer>
        <p>Desenvolvido por Felipe Saldanha de Souza GU3011801 - IFSP Guarulhos</p>
        </footer>
</body>

</html>
<?php
}
else {
    echo"
    <script>
    window.location.href='fonte/index.php'
    </script>
    ";
}

?>