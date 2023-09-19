<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <title>Atividade 1</title>  
    <style>
        body{background-color:gray;font-size:20px;}
        h1 {text-align:center;font-size:25px;color:#f0e597;}
        div{margin: 0 auto;text-align:justify;height:750px;width:500px;}
    </style> 
    
</head>
<body>
    <h1>Atividade 1 - ProfºCamoleze - LPS - 3º Informática para Internet E - 14/03/2023</h1>
    <div>
        <?php
            $nome = 'Miguel Silva Teixeira';
            $numero = '19';
            echo "<center><font color=\"#dff5a9\"> Nome: ".$nome." | Número:".$numero."</font></center><br>";

            //Exercicio 1
            echo "<font color=\"#c3f7ba\">1 Dada a frase \"Aula de php\" transforma-lá em maiúscula e depois em minúscula: </font><br>";
            $frase1 = "Aula de php";
            echo "<font color=\"#b7eded\">".$frase1."</font><br>";

            $frase1 = strtoupper($frase1);
            echo "<font color=\"#b7eded\">".$frase1."</font><br>";

            $frase1 = strtolower($frase1);
            echo "<font color=\"#b7eded\">".$frase1."</font><br><br>";

            //Exercicio 2
            echo "<font color=\"#c3f7ba\">2 Imprimir o inverso do seu nome: </font><br>";
            $nome = strrev($nome);
            echo "<font color=\"#b7eded\">".$nome."</font><br><br>";


            //Exercicio 3
            echo "<font color=\"#c3f7ba\">3 Tranformar a frase \"Já estudei java antes\" em \"já estudei java e  php antes\": </font><br>";
            $frase2 = "Já estudei java antes";
            $frase2 = strtolower($frase2);
            $frase2 = str_replace("antes","e php antes",$frase2);
            echo "<font color=\"#b7eded\">".$frase2."</font><br><br>";

            //Exercicio 4
            echo "<font color=\"#c3f7ba\">4 Separar os nomes das pessoas e imprimir um por linha  \"João,Maria,José,Paulo,Ana\": </font><br>";
            $frase3 = "João,Maria,José,Paulo,Ana";
            $frase3 = explode(",",$frase3);
            foreach ($frase3 as $value) {
                echo "<font color=\"#b7eded\">"."$value </font><br>";
            }

            //Exercicio 5
            echo "<br><font color=\"#c3f7ba\">5 Numa dada frase \"O PHP foi criado em noventa e cinco\" trocar o  \"O\"(letra) por \"0\"(zero), o \"A\" por \"4\" e o \"i\" por \"1\": </font><br>";        
            $frase4 = "O PHP foi criado em noventa e cinco";
            $frase4 = strtolower($frase4);
            $frase4 = str_replace("o","0",$frase4);
            $frase4 = str_replace("a","4",$frase4);
            $frase4 = str_replace("i","1",$frase4);
            echo "<font color=\"#b7eded\">".$frase4."</font>";
        ?>
    </div>
</body>
</html>