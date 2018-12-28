
/**
 * Write a description of class Lab10 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Lab10
{
    // instance variables - replace the example below with your own
    private Circle cercGalben;
    private Triangle triunghiAlbastru;

    /**
     * Constructor for objects of class Lab10
     */
    public Lab10()
    {
        // initialise instance variables
      cercGalben = new Circle();
      triunghiAlbastru = new Triangle();
      
        cercGalben.changeColor("yellow");
        cercGalben.changeSize(100);
        cercGalben.moveRight();
        cercGalben.moveRight();
        cercGalben.slowMoveHorizontal(100);
        cercGalben.makeVisible();
        cercGalben.moveVertical(50);
        cercGalben.slowMoveHorizontal(-50);
        cercGalben.changeSize(50);
        cercGalben.changeSize(150);
        cercGalben.slowMoveHorizontal(-10);
        cercGalben.moveLeft();
        cercGalben.moveLeft();
        cercGalben.moveRight();
        cercGalben.makeVisible();
        
        triunghiAlbastru.changeSize(100, 200);
        triunghiAlbastru.slowMoveHorizontal(50);
        triunghiAlbastru.slowMoveHorizontal(50);
        triunghiAlbastru.moveRight();
        triunghiAlbastru.moveLeft();
        triunghiAlbastru.moveDown();
        triunghiAlbastru.moveDown();
        triunghiAlbastru.moveDown();
        triunghiAlbastru.changeColor("blue");
        triunghiAlbastru.makeVisible();
    }

     public static void main(String args[])
     {
         Lab10 l = new Lab10();
     }
}
