using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace ITPCrud
{
    public partial class CustomerView : System.Web.UI.Page
    {
        SqlConnection sqlCon = new SqlConnection(@"Data Source=GAYATH;Initial Catalog=ITP_Crud;Integrated Security=True");
        protected void Page_Load(object sender, EventArgs e)
        {
            viewCode();
        }

        
        void viewCode()
        {
            if (sqlCon.State == ConnectionState.Closed)
                sqlCon.Open();
            SqlCommand Cmd = new SqlCommand("PromotionsViewAll", sqlCon);
            Cmd.CommandType = System.Data.CommandType.StoredProcedure;
            Cmd.Connection = sqlCon;

            
            String code = "";
            String name = "";
            String amount = "";
            SqlDataReader reader = Cmd.ExecuteReader();
            while (reader.Read())
            {
                name += reader["Name"].ToString();
                amount += reader["Amount"].ToString();
                code += reader["Code"].ToString();
            }
            Name.Text = name;
            Amount.Text = amount;
            Code.Text = code;
            
        }

       
    }
}
