<div align="center">
  <img height="150" src="https://s22428.pcdn.co/wp-content/uploads/2015/09/AE-maze1.gif"  />
</div>

###

<h1 align="center"> Maze </h1>

###

<p align="center">A maze generator and solver in C </p>

<br>
<h3 align="center">Description </h3>
<br>

<div align="center">

  The project was to create a maze generator that can generate either a perfect or imperfect maze. <br>
  A perfect maze is a maze that has only one possible path. <br>
  On the countrary, an imperfect maze is a one that has multiple paths.
  <br>
  For this we used the  <br>
  <br>
  For the solving part we used Trémaux's algorithm. <br>
  It finds always find a path, except when their are none but will not find the shortest one. <br>
  <br>
  
  <div align="center">
    <img height="200" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/11/Tremaux_Maze_Solving_Algorithm.gif/220px-Tremaux_Maze_Solving_Algorithm.gif"  />
  </div>

###

  <br>
<h3 align="center">Usage </h3>
<br>

<div align="center">

  (Requires GCC to work)

  Start with : `make` to build project <br>
  you will now have a `generator` binary in dir generator <br>
  and a 'solver' binary in dir solver <br>
  <br>
  <br>
  
  
  ```bash
  generator/./generator X Y > <file name> # Provide a number for X and Y
  # add perfect to the command for a perfect maze or it will be automatically an imperfect one
  
  solver/./solver <path to maze> # solve the maze
 
  ```
  </div>
  
###
  
###

  <br>
  <h3 align="center">Authors </h3>
  <div align="center">
    <a href="https://github.com/tvianney">@vianney</a> <a href="https://github.com/BebeSniffeur">@Léo</a> <br>
    <br>
  
  
