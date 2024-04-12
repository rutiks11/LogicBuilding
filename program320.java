import java.util.*;

class program320
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
        
        int iFreq = 0;

        for(String s : arr)
        {
            if(s.equals("India"))
            {
                iFreq++;
            }
        }
        
        System.out.println("Count of Given Word "+ iFreq);
}
}