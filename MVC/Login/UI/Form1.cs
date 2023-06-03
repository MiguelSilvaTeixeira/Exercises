using Login.BLL;
using Login.DTO;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Login
{
    public partial class FormLogin : Form
    {
        public FormLogin()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnEntrar_Click(object sender, EventArgs e)
        {
            //Criando o objeto login para obter o email e o login
            LoginDTO ObjLogin = new LoginDTO
            {
                Email = txtEmail.Text,
                Senha = txtSenha.Text
            };

            //Criando o objeto bll
            LoginBLL ObjBLL = new LoginBLL();
            //Chamando o método autenticar usuario e retornando o valor em boolean 
            bool retorno = ObjBLL.AutenticarUsuario(ObjLogin);

            // Condição para enviar uma mensagembox se o usuário foi autenticado ou não
            if (retorno) 
            {
                MessageBox.Show("Usuário Autenticado, Seja bem-vindo");
            } else {
                MessageBox.Show("Não lhe conheço vá embora");
            }
        }
    }
}
