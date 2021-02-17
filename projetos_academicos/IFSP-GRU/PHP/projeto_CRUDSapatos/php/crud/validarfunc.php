<?php
    SESSION_START();
    $login = isset($_POST["cxLogin"])
    ?strtolower($_POST["cxLogin"])
    :
    "";
    $senha = isset($_POST["cxSenha"])
    ?md5($_POST["cxSenha"])
    :
    "";
    
    include_once 'conexao.php';
    $log = mysqli_query($conn,
    "SELECT * FROM tbfunc WHERE  usuario = '$login' AND senha = '$senha'")or die(mysqli_error());
      
    $linha = mysqli_fetch_array($log);

    if ($login == "" || $senha == "") {
       echo "Erro, acesso restrito.";
    }
    if ($login !=$linha["usuario"] || $senha !=$linha["senha"]) {
        echo "Erro, acesso restrito.";
    }
    if ($login == $linha["usuario"] && $senha == $linha["senha"]) {
        $_SESSION["usuario"]=$linha["nome_funcionario"];
        echo "
        <script>
        window.location.href='../menufunc.php';
        </script>
        ";
    }
    else{
        echo "
        <script>
        alert('Acesso negado! Tente novamente.');
        window.location.href='../menufunc.php';
        </script>
        ";
    }

?>