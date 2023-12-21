
<p align="center">
<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/logo.jpg?format=2500w">
 <source media="(prefers-color-scheme: light)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQIrK23KvJPB7XdZrIk9mHwe3GZvtsUZLjkh-eG6KRgCLeWu3MW0kFcggq4COpLmeZviQ&usqp=CAU">
 <img alt="image holberton school" src="https://apply.holbertonschool.com/auth/sign_up?country=fr&locale=fr">
</picture>
</p>

# **Project Simple Shell**

Write a simple UNIX command interpreter in C.

## **Team and Tasks**

This project was released by Nassim Abaida and Marion Laroche in [Holbertonschool](https://www.holbertonschool.fr/?gad_source=1&gclid=CjwKCAiAvoqsBhB9EiwA9XTWGZshq5Y0wpTRGv4wPcY4bKSsX2uqJ0Q8YIAl5CLWh98Fr5Nqb4s6VhoCDUEQAvD_BwE)'s Bordeaux. We work on the campus every day and we make a Check in every morning and a Check out every afternoon. We divided the tasks, but we work in collaboration for all the project (decisions, organisation, commits...).

Our simple shell is a program that takes commands from the keyboard via the terminal, and gives them to the operating system to perform.

## **Its essential functionalities**

Display a prompt and wait for the user to type a command.
Handles commands with arguments.
Handles the PATH global variable.
Runs the following build_in commands: exit, env.
Handles The EOF (End Of File) condition.
The prompt is displayed again each time a command has been executed.

## **List of allowed functions and system calls for this project**

- all functions from string.h
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- printf (man 3 printf)
- fprintf (man 3 fprintf)
- vfprintf (man 3 vfprintf)
- sprintf (man 3 sprintf)
- putchar (man 3 putchar)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## **Compilation**

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## **Files**

|      file      |                                      description                                         |
|---------------:|------------------------------------------------------------------------------------------|
|          main.h|                                         Header file, contains all prototypes and library.|
|  process-tokens|                                    Process to tokenised the command entered in the shell.|
|         shell.c|    File with the loop, the built in functions, isatty function and exec_command function.|
|   get_fonctions|                                                                     Process for the PATH.|
|          main.c|                                                           Test file for our simple shell.|

## **Flowchart for Simple Shell**
[Uploading<mxfile host="app.diagrams.net" modified="2023-12-20T19:58:55.736Z" agent="Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36" etag="M8ne0kS29T3XM0U5CBHE" version="22.1.11" type="device">
  <diagram id="kgpKYQtTHZ0yAKxKKP6v" name="Page-1">
    <mxGraphModel dx="2284" dy="746" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="850" pageHeight="1100" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-37" value="YES" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="-90" y="320" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-38" value="NO" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="40" y="260" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-1" value="START" style="ellipse;whiteSpace=wrap;html=1;fillColor=#e6d0de;gradientColor=#d5739d;strokeColor=#996185;" vertex="1" parent="1">
          <mxGeometry x="-100" width="120" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-2" value="Enter Command" style="rhombus;whiteSpace=wrap;html=1;fillColor=#fff2cc;gradientColor=#ffd966;strokeColor=#d6b656;" vertex="1" parent="1">
          <mxGeometry x="-90" y="100" width="100" height="100" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-4" value="is the command valid ?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#d5e8d4;gradientColor=#97d077;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="-120" y="240" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-5" value="is the line only one word ?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#d5e8d4;gradientColor=#97d077;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="-120" y="360" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-6" value="Error message" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;gradientColor=#7ea6e0;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="110" y="250" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-8" value="" style="endArrow=classic;html=1;rounded=0;entryX=1;entryY=0.5;entryDx=0;entryDy=0;exitX=0.5;exitY=0;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-6" target="TSEl5Sc3tw6grHb5hHNI-2">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="170" y="240" as="sourcePoint" />
            <mxPoint x="220" y="320" as="targetPoint" />
            <Array as="points">
              <mxPoint x="170" y="150" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-9" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-2" target="TSEl5Sc3tw6grHb5hHNI-4">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="90" y="320" as="sourcePoint" />
            <mxPoint x="140" y="270" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-10" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-40.43" y="320" as="sourcePoint" />
            <mxPoint x="-40.43" y="360" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-11" value="" style="endArrow=classic;html=1;rounded=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-40" y="80" as="sourcePoint" />
            <mxPoint x="-40.43" y="100" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-12" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="169.66" y="430" as="sourcePoint" />
            <mxPoint x="169.66" y="470" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-15" value="Tokenize each word and place it in an array" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;gradientColor=#7ea6e0;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="110" y="370" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-16" value="" style="endArrow=classic;html=1;rounded=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="40" y="280" as="sourcePoint" />
            <mxPoint x="110" y="280" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-17" value="" style="endArrow=classic;html=1;rounded=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="40" y="399.40999999999997" as="sourcePoint" />
            <mxPoint x="110" y="399.40999999999997" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-19" value="Put the word/token into the PATH function" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;gradientColor=#7ea6e0;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="110" y="470" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-21" value="is &quot;exit&quot; ?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#d5e8d4;gradientColor=#97d077;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="-120" y="460" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-22" value="is &quot;env&quot; ?" style="rhombus;whiteSpace=wrap;html=1;fillColor=#d5e8d4;gradientColor=#97d077;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="-320" y="460" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-23" value="" style="endArrow=classic;html=1;rounded=0;exitX=0;exitY=0.5;exitDx=0;exitDy=0;entryX=0.5;entryY=0;entryDx=0;entryDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-5" target="TSEl5Sc3tw6grHb5hHNI-22">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-190" y="370" as="sourcePoint" />
            <mxPoint x="-140" y="320" as="targetPoint" />
            <Array as="points">
              <mxPoint x="-240" y="400" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-24" value="" style="endArrow=classic;html=1;rounded=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-22" target="TSEl5Sc3tw6grHb5hHNI-21">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-180" y="570" as="sourcePoint" />
            <mxPoint x="-130" y="520" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-25" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-21">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="60" y="550" as="sourcePoint" />
            <mxPoint x="110" y="500" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-26" value="Print the environment" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;gradientColor=#7ea6e0;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="-300" y="580" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-27" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-240.50000000000003" y="540" as="sourcePoint" />
            <mxPoint x="-240.50000000000003" y="580" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-28" value="" style="endArrow=classic;html=1;rounded=0;entryX=0;entryY=0.5;entryDx=0;entryDy=0;exitX=0;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-26" target="TSEl5Sc3tw6grHb5hHNI-2">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-310" y="620" as="sourcePoint" />
            <mxPoint x="-190" y="690" as="targetPoint" />
            <Array as="points">
              <mxPoint x="-350" y="610" />
              <mxPoint x="-350" y="150" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-29" value="Exit the shell" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#fff2cc;gradientColor=#ffd966;strokeColor=#d6b656;" vertex="1" parent="1">
          <mxGeometry x="-100" y="580" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-30" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="-40.33000000000004" y="540" as="sourcePoint" />
            <mxPoint x="-40.33000000000004" y="580" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-31" value="Command is found &lt;br&gt;on the PATH" style="rhombus;whiteSpace=wrap;html=1;fillColor=#d5e8d4;gradientColor=#97d077;strokeColor=#82b366;" vertex="1" parent="1">
          <mxGeometry x="90" y="570" width="160" height="80" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-32" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="169.57" y="530" as="sourcePoint" />
            <mxPoint x="169.57" y="570" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-33" value="" style="endArrow=classic;html=1;rounded=0;exitX=0.5;exitY=1;exitDx=0;exitDy=0;" edge="1" parent="1" target="TSEl5Sc3tw6grHb5hHNI-34">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="169.57" y="650" as="sourcePoint" />
            <mxPoint x="169.57" y="690" as="targetPoint" />
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-34" value="execute the command" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;gradientColor=#7ea6e0;strokeColor=#6c8ebf;" vertex="1" parent="1">
          <mxGeometry x="109.99999999999994" y="690" width="120" height="60" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-35" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-31">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="260" y="410" as="sourcePoint" />
            <mxPoint x="170" y="150" as="targetPoint" />
            <Array as="points">
              <mxPoint x="300" y="610" />
              <mxPoint x="300" y="150" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-36" value="" style="endArrow=classic;html=1;rounded=0;exitX=1;exitY=0.5;exitDx=0;exitDy=0;" edge="1" parent="1" source="TSEl5Sc3tw6grHb5hHNI-34">
          <mxGeometry width="50" height="50" relative="1" as="geometry">
            <mxPoint x="330" y="470" as="sourcePoint" />
            <mxPoint x="300" y="610" as="targetPoint" />
            <Array as="points">
              <mxPoint x="300" y="720" />
            </Array>
          </mxGeometry>
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-41" value="YES" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="-290" y="540" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-42" value="YES" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="-90" y="540" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-43" value="YES" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="120" y="650" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-44" value="NO" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="-170" y="480" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-45" value="NO" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="40" y="480" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-46" value="NO" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="40" y="380" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-50" value="YES" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="-210" y="380" width="60" height="30" as="geometry" />
        </mxCell>
        <mxCell id="TSEl5Sc3tw6grHb5hHNI-51" value="NO" style="text;strokeColor=none;align=center;fillColor=none;html=1;verticalAlign=middle;whiteSpace=wrap;rounded=0;" vertex="1" parent="1">
          <mxGeometry x="250" y="590" width="60" height="30" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
 SS.drawio…]()

## **Authors**
Abaida Nassim [Github](https://github.com/Nassim33150).
Laroche Marion [Github](https://github.com/Mamuche).
