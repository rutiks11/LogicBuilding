// Accept two strings and check whether are anagram or not
// str1 : Marvellous
// str2 : osulMalver

import java.util.*;

class program329
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter first string :");
        String str1 = sobj.nextLine();
        
        System.out.println("Enter second string :");
        String str2 = sobj.nextLine();

        if(str1.length() != str2.length())
        {
            System.out.println("String are not anagram");
            return;
        }

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();
        
        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if(Arrays.equals(Arr,Brr))
        {
            System.out.println("String are anagram");        
        }
        else
        {
            System.out.println("String are anagram");        
        }
    }
}

