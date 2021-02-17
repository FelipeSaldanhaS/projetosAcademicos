<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, intial-scale=1.0">
    <link rel="icon" href="../../img/sapato_icon.ico" />
    <link rel="stylesheet" type="text/css" href="../../css/Estilo.css" />
    <link href="https://fonts.googleapis.com/css2?family=Sansita+Swashed:wght@300&display=swap" rel="stylesheet">
    <title>Login Sapataria-Funcionario</title>
</head>
<body>
    <div class="container">
    <form action="../crud/validarfunc.php" method="POST">
    <h2>Login:</h2>
    <input type="text" name="cxLogin" required>
    <br>
    <h2>Senha:</h2>
    <input type="password" name="cxSenha" required>
    <br>
    <br>
    <input type="submit" value="Acessar">
    </form>
</div>
<footer>
        <p>Desenvolvido por Felipe Saldanha de Souza GU3011801 - IFSP Guarulhos</p>
        </footer>
</body>

</html>