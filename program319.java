import java.util.*;

class program319
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();

        String arr[] = str.split(" ");
        System.out.println("Numer of words are : "+arr.length);


    }
}