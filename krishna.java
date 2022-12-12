import java.sql.*;

class Krishna
{
    public static void main(String arg[]) throws Exception
    {
    
    
        //class.forName("com.mysql.cj.jdbc.Driver");
        String URL = "jdbc:mariadb://localhost:3306/pp41";
        String Username = "root";
        String Password = "root";
        String Query = "select * from student";
        Connection cobj = DriverManager.getConnection(URL,Username,Password);
        
	
	
	
        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("RID : "+robj.getInt("RID"));
            System.out.println("Name : "+robj.getString("Name"));
            System.out.println("City : "+robj.getString("City"));
            System.out.println("Marks : "+robj.getInt("Marks"));                                    
        }
    }
}

//export CLASSPATH=/usr/share/java/mysql-connector-java-8.0.20.jar:$CLASSPATH

