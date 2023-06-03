using Login.DTO;
using Login.DAL;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Login.BLL
{
    public class LoginBLL
    {
        public bool AutenticarUsuario(LoginDTO loginDTO)
        {
            // Verifica se email ou senha estão vazios, se estiverem retorna false
            if (loginDTO.Email != "" || loginDTO.Senha != "")
            {
                //Criando o objeto DAL
                LoginDAL ObjAutenticado = new LoginDAL();
                //Chamando o método verificar credenciais e retornando o valor em boolean 
                return ObjAutenticado.VerificarCredenciais(loginDTO);
                
            } return false;
        }
    }
}
