//ExAnoBissexto.java (Autor: Miguel Teixeira)
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

class ExAnoBissexto extends JFrame implements ActionListener
{
    JLabel L1;
    JTextField T1,T2;
    JButton B1,B2,B3;
    Integer ano=0;

    public static void main(String args[])
    {
        JFrame Janela = new ExAnoBissexto();
        Janela.setVisible(true);    
    }
    
    ExAnoBissexto()
    {
        setTitle("Ver Ano");
        setSize(300,120);
        getContentPane().setBackground(new Color (190,190,190));

        L1 = new JLabel("Digite Ano: ");
        T1 = new JTextField();
        T2 = new JTextField();
        B1 = new JButton("Limpar");
        B1.addActionListener(this);
        B2 = new JButton("Ver Ano");
        B2.addActionListener(this);
        B3 = new JButton("Sair");
        B3.addActionListener(this);

        T2.setEditable(false);

        getContentPane().setBackground(Color.red);
        getContentPane().setLayout(new GridLayout(2,3));

        add(L1);add(T1);add(T2);
        add(B1);add(B2);add(B3);
    }

    public void actionPerformed(ActionEvent e)
    {        
        if(e.getSource()==B1) 
        {
            T1.setText("0");
            T2.setText("0");
        }

        if(e.getSource()==B2)
        {
        	ano = Integer.parseInt(T1.getText());		
       		if(ano % 4 == 0 & ano % 100 >= 1){
        	T2.setText(" é bissexto.");
		} else{
        	T2.setText(" não é bissexto");
        	}
        }

        if(e.getSource()==B3)
        {
            T1.setText("0"); T2.setText("0");
            System.exit(0);
        }
    }
}
