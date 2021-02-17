<html lang="pt-br">

<head>
    <title>Lanchonete</title>
    <meta charset="utf-8" />
    <link rel="stylesheet" type="text/css" href="estilos/Estilo.css" />
    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link rel="icon" href="img/coxinha.ico" />
    <link href="https://fonts.googleapis.com/css2?family=Didact+Gothic&display=swap" rel="stylesheet">
</head>

<body>
    <div id="formu">
        <form action="pedido.php" method="GET" name="frmPedido">
        <img src="img/coxa.png" width=150 height=150 alt="BRIDGES-Lanches" title="BRIDGES-Lanches">
        <h1>BRIDGES Lanches</h1>
            <h1>Faça seu pedido!</h1>
            <!--\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ -->
            <h2>Nome:</h2><input type="text" size="35" maxlength="35" placeholder="Informe um nome." autofocus
                name="txtNome" />
            <h2>DDD :<input type="text" size="2" maxlength="2" placeholder="DDD." name="txtDDD" class="ddd" />
                Telefone: <input type="text" size="10" maxlength="10" placeholder="Telefone." name="txtTelefone" /></h2>
            <!--\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ -->
            <h2>Escolha um salgado..</h2>
            <select name="selSal" required>
                <option value="" disabled selected>
                    Selecione um salgado...
                </option>
                <option value="Kibe">
                    Kibe (R$6.00 uni)
                </option>
                <option value="Coxi">
                    Coxinha (R$4.00 uni)
                </option>
                <option value="Quei">
                    Bolinha de Queijo (R$2.50 uni)
                </option>
                <option value="Carn">
                    Bolinha de Carne (R$3.25 uni)
                </option>
            </select>
            <!--\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ -->
            <br>
            <h2>Quantos:</h2>
            <h3>Promoção: Se pegar 3 pague com desconto de 2% do valor total, acima disso, 5%!</h3>
            <input type="number" min="1" name="numQuant">
            <br>
            <!--\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ -->
            <h2>Entrega:</h2>
            <h3><input type="radio" name="radEntre" value="Local" checked>No local.</h3>
            <br>
            <h3><input type="radio" name="radEntre" value="Deli">Delivery (R$5,00).</h3>
            <br>
            <!--\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ -->
            <br>
            <input type="submit" value=" Finalizar pedido" />
        </form>
    </div>
</body>
<html>