picture "myPS-Beispiel"
var phi: Int;
var i: Int;
var x: Num;
var y: Num;
var amp: Num;
var s: Num;
var c: Num;
var horz: Num;
var rad: Num;
start 
    x := 300;
    y := 300;
    rad := 100;

    amp := 100;
    drawellipse <- {
        setlinewidth(20 * abs(sin(phi)));
        c := 0.4 + 0.4 * cos(phi);
        s := 0.8 + 0.2 * sin(1.5 * phi);
        setcolor(c, s, s);
        translate(x, 2 * y,
            rotate(horz * 90,
                scale(abs(cos(phi)), 1,
                    draw(ellipse((amp * sin(phi), 0), rad * abs(cos(phi)), rad, 0, 360))
                )
            )
        );
    };
    translate(0, -0.3 * y,
        clip(ellipse((x, 2.5 * y), 3 * rad, 2 * rad, 0, 360),
            {
                setcolor(0.8, 0.9, 0.8);
                fill(arc((x, 2 * y), 1.5 * rad, 0, 360));
                for phi := 0 to 360 step 30 do
                    horz := 0; drawellipse;
                    horz := 1; drawellipse;
                done;
            })
    );

    drawsector := <<(0, 0), (1, 0), (cos(72), sin(72))>>;
    drawstar <- {
        for phi := 72 to 360 step 72 do
            setcolor(0.5, 0.5, random(50, 100) / 100);
            scale(100, 100, rotate(phi, fill(drawsector)));
        done;
    };
    drawobject <- {
        for i := 20 to 360 step 20 do
            translate(x, y, rotate(i, translate(50, 0, drawstar)));
        done;
    };
    drawobject;

    setfont("Courier-Oblique", 70);
    setcolor(0.4, 0.4, 0.8);
    write((x + 50 , 100), "myPS");
end
