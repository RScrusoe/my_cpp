#include<simplecpp>
main_program
{   initCanvas("test",1800,500); short lastx=0;short lasty=0; const char escape='\33';
    XEvent event;
    while(true){
    nextEvent(event);

    if(mouseButtonPressEvent(event))
    {lastx=event.xmotion.x; lasty=event.xmotion.y;
    cout<<lastx<<" "<<lasty<<endl;
    }
    if(mouseDragEvent(event))
    {
       imprintLine(lastx,lasty,event.xbutton.x,event.xbutton.y);
        lastx=event.xbutton.x; lasty=event.xbutton.y;
       // cout<<lastx<<" "<<lasty<<endl;
        //Line p(10,10,lastx,lasty); p.setColor(COLOR("red"));
    }
    if(keyPressEvent(event))
    {
        if(charFromEvent(event)==escape) break;
    }
    }
}



