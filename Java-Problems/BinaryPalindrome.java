import java.util.Scanner;

class BinaryPalindrome
{

    public static boolean isPalindrome(int n)
    {

        int rev = 0;


        int k = n;
        while (k > 0)
        {

            rev = (rev << 1) | (k & 1);
            k = k >> 1;
        }


        return n == rev;
    }

    public static void main(String[] args)
    {

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number: ");
        int n = sc.nextInt();

        if (isPalindrome(n)) {
            System.out.println(n + " is a palindrome");
        }
        else {
            System.out.println(n + " is not a palindrome");
        }
    }
}
