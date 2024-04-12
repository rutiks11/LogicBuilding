import java.util.*;

class program321
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.replaceAll("\\s+"," ");
        str = str.trim();

        int iFreq = 0;
        
        System.out.println("Enter word that you want to search :: ");
        String find = sobj.nextLine();

        String arr[] = str.split(" ");

        for(String s : arr)
        {
            if(s.equals(find))
            {
                iFreq++;
            }
        }
        
        System.out.println("Count of Given Word "+ iFreq);
    }
}