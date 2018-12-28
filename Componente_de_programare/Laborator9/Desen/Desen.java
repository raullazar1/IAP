public class Desen
{
    Dreptunghi d1;
    Dreptunghi d2;
    
    public Desen()
    {
        d1 = new Dreptunghi(30, 20, 10, 7);
        d2 = new Dreptunghi(110, 52, 32, 9);
        int arie = d1.aria() + d2.aria();
        System.out.println("Suma ariilor dreptunghiurilor: " + arie);
    }
    public static void main(String args[])
    {
        Desen d = new Desen();
    }
}