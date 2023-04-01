//ExConverterMes.java (Autor: Miguel Teixeira)
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class ExConverterMes extends JFrame implements ActionListener {
    JLabel L1, L2;
    JTextField T1, T2;
    JButton B1, B2, B3;
    Integer mes = 1;

    public static void main(String args[]) 
    {
        JFrame Janela = new ExConverterMes();
        Janela.setVisible(true);
    }

    ExConverterMes() 
    {
        setTitle("Ver Ano");
        setSize(410, 100);
        getContentPane().setBackground(new Color(190, 190, 190));

        L1 = new JLabel("Digite o Nº do mês: ");
        L2 = new JLabel("Mês:");
        T1 = new JTextField(5);
        T2 = new JTextField(15);
        B1 = new JButton("Converter");
        B1.addActionListener(this);
        B2 = new JButton("Limpar");
        B2.addActionListener(this);
        B3 = new JButton("Sair");
        B3.addActionListener(this);

        T2.setEditable(false);

        getContentPane().setBackground(Color.cyan);
        getContentPane().setLayout(new FlowLayout(FlowLayout.CENTER));

        add(L1);add(T1);add(L2);add(T2);
        add(B1);add(B2);add(B3);
    }

    public void actionPerformed(ActionEvent e) 
    {
        if (e.getSource() == B1) {
            mes = Integer.parseInt(T1.getText());
            switch (mes) {
                case 1:
                    T2.setText("Janeiro");
                    break;

                case 2:
                    T2.setText("Fevereiro");
                    break;

                case 3:
                    T2.setText("Marco");
                    break;

                case 4:
                    T2.setText("Abril");
                    break;

                case 5:
                    T2.setText("Maio");
                    break;

                case 6:
                    T2.setText("Junho");
                    break;

                case 7:
                    T2.setText("Julho");
                    break;

                case 8:
                    T2.setText("Agosto");
                    break;

                case 9:
                    T2.setText("Setembro");
                    break;

                case 10:
                    T2.setText("Outubro");
                    break;

                case 11:
                    T2.setText("Novembro");
                    break;
                
                case 12:
                    T2.setText("Dezembro");
                    break;

                default:
                    T2.setText("Existe esse mês?");
            }
        }

        if (e.getSource() == B2) {
            T1.setText("0");
            T2.setText("0");
        }

        if (e.getSource() == B3) {
            T1.setText("0");
            T2.setText("0");
            System.exit(0);
        }
    }
}
