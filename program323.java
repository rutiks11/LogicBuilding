import java.util.*;

class program323
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringBuffer obj = new StringBuffer(str);

        obj = obj.reverse();
    
        System.out.println(obj);
    }
}