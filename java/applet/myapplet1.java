import java.awt.*;
import java.applet.*;

/*
<applet code=myapplet1 height=1000 width=1000></applet>
*/

public class myapplet1 extends Applet
{
	public String str;
	public void init()
	{
		str="hello";
	}
	
	public void paint(Graphics g)
	{
		g.drawString(str,120,120);
	}
}
