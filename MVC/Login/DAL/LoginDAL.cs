using Login.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Login.DAL
{
    public class LoginDAL
    {
        // Este exemplo simplesmente retorna true se o email e a senha forem iguais a "admin@adimin.com" e "1234".
        public bool VerificarCredenciais(LoginDTO ObjLogin)
        {
            if (ObjLogin.Email == "admin@admin.com" && ObjLogin.Senha == "1234")
            {
                return true;
            } else { return false; }
        }
    }
}
