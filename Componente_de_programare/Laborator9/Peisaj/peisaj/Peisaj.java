

public class Peisaj
{
    private Square ziduri;
    private Square fereastra;
    private Triangle acoperis;
    private Circle soare;

    public Peisaj()
    {
        ziduri = new Square();
        ziduri.moveVertical(80);
        ziduri.changeSize(100);
        ziduri.makeVisible();

        fereastra = new Square();
        fereastra.changeColor("black");
        fereastra.moveHorizontal(20);
        fereastra.moveVertical(100);
        fereastra.makeVisible();

        acoperis = new Triangle();
        acoperis.changeSize(50, 140);
        acoperis.moveHorizontal(60);
        acoperis.moveVertical(70);
        acoperis.makeVisible();

        soare = new Circle();
        soare.changeColor("yellow");
        soare.moveHorizontal(180);
        soare.moveVertical(-10);
        soare.changeSize(60);
        soare.makeVisible();
    }

    public static void main(String args[])
{
   Peisaj p = new Peisaj();
}
}
