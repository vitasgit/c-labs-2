{$mode objfpc}
uses SysUtils, Math;

var
    a: integer = 13;
    b: integer = 16;
    s: integer = 0;
    temp: integer;

BEGIN
    while(a < b) do
    begin
        if (b mod a) = 0 then
        begin
            s := a;
            a := b;
        end
        else
        begin
            temp := b;
            b := a;
            a := temp - a;
        end;
    end;

    writeln(s);
END.
