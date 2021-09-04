import React from 'react';
import Navbar from './Navbar';
import MovieCard from './MovieCard';


function App(props) {
  const movies = props.store.getState();
  return (
    <div className="App">
      <Navbar />
      <div className="main">
        <div className="tabs">
          <div className="tab">Movies</div>
          <div className="tab">Favourites</div>
        </div>

        <div id="list">
          {movies.map((movie,index) => (
            <MovieCard movie={movie} key ={`movies-${index}`} />
          ))}
        </div>
      </div>
    </div>
  );
}

export default App;