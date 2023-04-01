//ExTabuada.java (Autor: Miguel Teixeira)
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class ExTabuada extends JFrame implements ActionListener
{

    JLabel L1;
    JTextField T1;
    JButton B1, B2, B3;
    JTextArea A1;
    float i=0, N1=0, result=0;

    public static void main(String args[])
    {
        JFrame Janela = new ExTabuada();
        Janela.setVisible(true);
    }

    ExTabuada()
    {
        getContentPane().setBackground((Color.cyan));
	setTitle("Tabuada");
	setSize(300,200);
	getContentPane().setLayout(new FlowLayout(FlowLayout.CENTER));

	L1 = new JLabel("Digite um numero:");
	L1.setForeground(Color.black);

        T1 = new JTextField(10);
	T1.addActionListener(this);

        B1 = new JButton ("Tabuada");
	B1.addActionListener(this);
	B2 = new JButton ("Limpar");
	B2.addActionListener(this);
	B3 = new JButton ("Sair");
	B3.addActionListener(this);

        A1 = new JTextArea(5,10);
        A1.setEditable(false);
        JScrollPane painel = new JScrollPane(A1);

        getContentPane().add(L1);getContentPane().add(T1);
        getContentPane().add(B1);getContentPane().add(B2);getContentPane().add(B3);
        getContentPane().add(painel);
    }

    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==B3)
        {
            T1.setText("0"); A1.setText("0");
            System.exit(0);
        }

        if(e.getSource()==B2)
        {
            T1.setText(" ");A1.setText(" ");
            i = 0;
        }

        if(e.getSource()==B1)
        {
            N1 = Float.parseFloat(T1.getText());
            if(i == 0)
            {
                result = N1*i;
                A1.setText(A1.getText() + N1 + " x " + i + " = " + result);
                i++;
            }

            while(i <= 10 & i >= 1)
            {
                result = N1*i;
                A1.setText(A1.getText() + "\n"+ N1 + " x " + i + " = " + result);
                i++;
            }            
        }
    }
}
