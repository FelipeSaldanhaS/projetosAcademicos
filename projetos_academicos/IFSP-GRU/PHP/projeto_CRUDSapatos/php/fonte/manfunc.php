<?php
SESSION_START();
if (isset($_SESSION["usuario"])) {
    $us = $_SESSION["usuario"];
    
    ?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Manuntenção Funcionários da Sapataria</title>
    <meta name="viewport" content="width=device-width, intial-scale=1.0">
    <link rel="icon" href="../../img/sapato_icon.ico" />
    <link rel="stylesheet" type="text/css" href="../../css/Estilo.css" />
    <link href="https://fonts.googleapis.com/css2?family=Sansita+Swashed:wght@300&display=swap" rel="stylesheet">
    <meta charset="UTF-8" />
</head>

<body>
    <nav>
        Perfil:<?php echo " " . $us ?><br>
        <a href="../fimsessao.php">Sair</a>
    </nav>
    <hr>
    <form action="../crud/func/inserirdadosfunc.php" method="POST">
        <fieldset>
            <h2>INSERÇÃO DE FUNCIONÁRIOS:</h2>
            Nome:<br>
            <input type="text" name="cxNome" / required><br>
            Usuario:<br>
            <input type="text" name="cxUser" / required><br>
            Senha:<br>
            <input type="text" name="cxSenha" / required><br>
            <input type="submit" value="Enviar">
        </fieldset>
    </form>
    <br>
    <fieldset>
        <form action="../crud/func/buscarfuncnome.php" method="POST">
            Digite o nome do funcionário..
            <input type="text" name="cxBuscaNome" />
            <button type="submit" class="botao">Buscar</button>
        </form>
    </fieldset>
    <br>
    <fieldset>
        <center><a href="../crud/func/listarfunc.php">Listar todos os funcionários</a></center>
        <br>
        <center><a href="../menufunc.php">Voltar ao menu do funcionário</a></center>
    </fieldset>
    <footer>
        <p>Desenvolvido por Felipe Saldanha de Souza GU3011801 - IFSP Guarulhos</p>
    </footer>
</body>

</html>
<?php
} else {
    echo "
    <script>
    window.location.href='../fonte/index.php'
    </script>
    ";
}

?>