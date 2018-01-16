import java.applet.*;
import java.awt.*;

/*
<applet code=DisplayImage height=10000 width=10000></applet>
*/

public class DisplayImage extends Applet
{
	Image img;
	Scrollbar sc;
	
	public void init()
	{
		img=getImage(getCodeBase(),"image.jpg");
		sc=new Scrollbar(Scrollbar.VERTICAL,0,10,0,255);
	}
	
	public void paint(Graphics g)
	{
		g.drawImage(img,10,10,this);
		add(sc,null);
	}
}
