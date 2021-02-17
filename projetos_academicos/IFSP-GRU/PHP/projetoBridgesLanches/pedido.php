<html lang="pt-br">

<head>
    <title>Lanchonete-Pedido</title>
    <meta charset="utf-8" />
    <link rel="stylesheet" type="text/css" href="estilos/Estilo2.css" />
    <link rel="icon" href="img/coxinha.ico" />
    <link href="https://fonts.googleapis.com/css2?family=Roboto:ital@1&display=swap" rel="stylesheet">
</head>

<body>
    <?php
    $Nome = $_GET["txtNome"];
    $DDD = $_GET["txtDDD"];
    $Tel = $_GET["txtTelefone"];
    $Sal = $_GET["selSal"];
    $ValorT = 0.0;
    $ValorD = 0.0;
    $Entrega = $_GET["radEntre"];
    $Num = $_GET["numQuant"];
    //-----------------------------------------
    switch ($Sal) {
            //======Kibe======
        case 'Kibe':
            if ($Num == 3) {
                $ValorT = 6.00 * $Num;
                $ValorT = ($ValorT / 100) * 98;
                $ValorD = $ValorT - ($ValorT / 100) * 98;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else if ($Num > 3) {
                $ValorT = 6.00 * $Num;
                $ValorT = ($ValorT / 100) * 95;
                $ValorD = $ValorT - ($ValorT / 100) * 95;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else {
                $ValorT = 6.00 * $Num;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            }
            break;
            //======Coxinha======
        case 'Coxi':
            $Sal = "Coxinha";
            if ($Num == 3) {
                $ValorT = 4.00 * $Num;
                $ValorT = ($ValorT / 100) * 98;
                $ValorD = $ValorT - ($ValorT / 100) * 98;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else if ($Num > 3) {
                $ValorT = 4.00 * $Num;
                $ValorT = ($ValorT / 100) * 95;
                $ValorD = $ValorT - ($ValorT / 100) * 95;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else {
                $ValorT = 4.00 * $Num;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            }
            break;
            //======Queijo======
        case 'Quei':
            $Sal = "Bolinha de Queijo";
            if ($Num == 3) {
                $ValorT = 2.50 * $Num;
                $ValorT = ($ValorT / 100) * 98;
                $ValorD = $ValorT - ($ValorT / 100) * 98;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else if ($Num > 3) {
                $ValorT = 2.50 * $Num;
                $ValorT = ($ValorT / 100) * 95;
                $ValorD = $ValorT - ($ValorT / 100) * 95;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else {
                $ValorT = 2.50 * $Num;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            }
            break;
            //======Carne======
        case 'Carn':
            $Sal = "Bolinha de Carne";
            if ($Num == 3) {
                $ValorT = 3.25 * $Num;
                $ValorT = ($ValorT / 100) * 98;
                $ValorD = $ValorT - ($ValorT / 100) * 98;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else if ($Num > 3) {
                $ValorT = 3.25 * $Num;
                $ValorT = ($ValorT / 100) * 95;
                $ValorD = $ValorT - ($ValorT / 100) * 95;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            } else {
                $ValorT = 3.25 * $Num;
                if ($Entrega == "Local") {
                } else {
                    $ValorT = $ValorT + 5.00;
                }
            }
            break;
    }
    ?>
    <div id="Pedido">
        <h1>Seu pedido:</h1>
        <h2>Contato:</h2>
        <p>Nome: <?php echo " " . $Nome; ?></p>
        <p>Telefone: DDD(<?php echo $DDD; ?>) <?php echo " " . $Tel ?></p>
        <hr>
        <h2>Compra:</h2>
        <p>Salgado:<?php echo " " . $Sal; ?></p>
        <p>Quantidade: <?php echo " ".$Num; ?></p>
        <p>Desconto: <?php echo " " .number_format($ValorD, 2); ?>R$.</p>
        <p>Valor total a ser pago:<?php
                        echo " " . number_format($ValorT, 2);
                        if ($Entrega != "Local")
                            echo " (5.00 R$ da entrega inclusos)"; ?> R$.</p>
        <form action="index.php" method="GET"><input type="submit" value="Fazer outro pedido?"></form>
    </div>
</body>

</html>