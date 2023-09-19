<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8"/>
    <title>Decisão e Laços</title>
    <link rel="stylesheet" href="css/estiloAtividade3.css"/>
</head>
<body>
    <form action="atividade3.php" method="get">
        Exercício 2 </br>
        Tempo de Serviço = <input type="number" name="respEx2a"/></br>
        Sexo (feminino ou masculino) = <input type="text" name="respEx2b"/></br></br>
        
        Exercício 4 </br>
        Nota 1 = <input type="number" name="nota1Ex4"/></br>
        Nota 2 = <input type="number" name="nota2Ex4"/></br>
        Nota 3 = <input type="number" name="nota3Ex4"/></br>
        </br><input type="submit"/></br></br>    
    </form>
    <?php
        echo "1.Receba um array(8,9,5,4,7) com as notas de alunos e para cada um  diga se ele foi aprovado na matéria (média 7) </br>";
        $notas = array("8","9","5","4","7");
        foreach($notas as $item) {
            echo "Nota = $item: ";
            if ($item>=7) {echo "Aprovado</br>";}else{echo "Reprovado</br>";}
        }

        echo "</br>2.Crie duas variáveis \$sexo e \$tempo_de_servico e sabendo que  homens só se aposentam com pelo menos 35 anos de serviço e  mulheres com pelo menos 30 crie o script que diz se a pessoa pode  se aposentar ou não. </br>";

        if (isset($_GET['respEx2a']) && isset($_GET['respEx2b'])) {
            $tempo_de_servico = $_GET['respEx2a'];
            $sexo = $_GET['respEx2b'];
        
            if ($tempo_de_servico >= 35) {
                if ($sexo == 'masculino') {
                    echo "Tempo de Serviço: $tempo_de_servico </br>";
                    echo "Sexo: $sexo </br>";
                    echo "Pode se aposentar. </br>";
                }
            } else if ($tempo_de_servico >= 30) {
                if ($sexo == 'feminino') { 
                    echo "Tempo de Serviço: $tempo_de_servico </br>";
                    echo "Sexo: $sexo </br>";
                    echo "Pode se aposentar. </br>";
                }
            } else {
                echo "Tempo de Serviço: $tempo_de_servico </br>";
                echo "Sexo: $sexo </br>";
                echo "Não pode se aposentar. </br>";
            }
        } else {
            echo "</br>Formulário não enviado. Por favor, preencha os campos corretamente.</br>";
        }

        echo "</br>3.Imprima uma tabela em HTML com as linhas alternando de cor </br></br>"
    ?>
        <table id="tabelaEx3">
            <tr class="linhaEx3">
                <th class="colunaEx3">Nome</th>
                <th class="colunaEx3">Número</th>
            </tr>
            <tr class="linhaEx3">
                <td class="colunaEx3">Miguel</td>
                <td class="colunaEx3">19</td>
            </tr>
            <tr class="linhaEx3">
                <td class="colunaEx3">Luanda</td>
                <td class="colunaEx3">16</td>
            </tr>
            <tr class="linhaEx3">
                <td class="colunaEx3">...</td>
                <td class="colunaEx3">...</td>
            </tr>
        </table>
    <?php
        if(isset($_GET['nota1Ex4']) && isset($_GET['nota2Ex4']) && isset($_GET['nota3Ex4'])) {
            echo "</br> 4. Recebendo 3 notas de alunos e sabendo:</br>
            se ele tirar menos que 3 em alguma está reprovado;</br>
            se ele tirar menos que 5 em alguma ele está na final;</br>
            se ele tirar menos que 7 em alguma e tiver média maior que 7  ele está aprovado;</br>
            se ele tirar mais que 7 em todas ele está aprovado por média  se ele tirou algum 10 ele é parabenizado, a não ser que tenha ido pra final ou sido reprovado </br></br>";

            $nota1 = $_GET['nota1Ex4'];
            $nota2 = $_GET['nota2Ex4'];
            $nota3 = $_GET['nota3Ex4'];
            $media = ($nota1 + $nota2 + $nota3) / 3;

            echo "Nota 1: $nota1 </br> Nota 2: $nota2 </br> Nota 3: $nota3 </br> Media: $media </br>";
            if ($nota1 < 3 || $nota2 < 3 || $nota3 < 3) {
                echo "Reprovado </br>";
            } else if ($nota1 < 5 || $nota2 < 5 || $nota3 < 5) {
                echo "Está na final </br>";
            } else if ($nota1 < 7 || $nota2 < 7 || $nota3 < 7 && $media > 7) {
                echo "Aprovado </br>";
            } else if ($nota1 > 7 || $nota2 > 7 || $nota3 > 7) {
                echo "Aprovado </br>";
                if ($nota1 == 10 || $nota2 == 10 || $nota3 == 10) {
                    echo "Parabéns </br>";
                }
            }
        } else {
            echo "</br>Formulário não enviado. Por favor, preencha os campos corretamente.</br>";
        }

        echo "</br> 5.Imprima, usando tabela de HTML, um tabuleiro de xadrez (8x8): </br>";
    ?>
    <table id="tabelaEx5">
        <tr>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
        </tr>
        <tr class="linhaEx5">
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
        </tr>
        <tr>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
        </tr>
        <tr class="linhaEx5">
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
        </tr>
        <tr>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
        </tr>
        <tr class="linhaEx5">
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
        </tr>
        <tr>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
            <td class="colunaEx5"></td>
        </tr>
        <tr class="linhaEx5">
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
            <td class="coluna2Ex5"></td>
        </tr>
    </table>
    <?php
        echo "</br> 6.Que arrumação de parênteses deixa a expressão  5 + 8 * 4 / 2 + 8 / 2 – 1 igual a 45: </br>";
        $testeEx6;
        echo "Resposta: 5+8*(4/2+8/2-1) = ", $testeEx6 = 5+8*(4/2+8/2-1), "</br>";
    ?>
</body>
</html>