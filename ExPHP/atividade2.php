<!DOCTYPE html>
<html lang="pt-br">
    <head>
        <meta charset="UTF-8">
        <title>Área do Círculo</title>
        <style>
            body{background-color:gray;font-size:20px;text-align:justify;margin:50px;}
            h1 {text-align:center;font-size:25px;color:#f0e597;}
            div{margin: 0 auto;text-align:center;height:750px;width:500px;}
        </style>
    </head>
    <body>
        <div>
            <h1>Criar um aplicativo em PHP que calcule a área de circulo</h1>
            <form action="atividade2.php" method="get">
                Raio do Circulo = <input type="text" name="num1"><br>
                <br><input type="submit">
            </form>
            <?php
                if (isset($_GET['num1'])) {
                    $num1 = $_GET['num1'];
                    $num2 = pi();
                    echo "<br>Área: $num1 x $num2 = ", $num1 * $num2, "<br>";
                } else {
                    echo "<br>Por favor, preencha o raio do círculo e envie o formulário.";
                }
            ?>
        </div>
    </body>
</html>