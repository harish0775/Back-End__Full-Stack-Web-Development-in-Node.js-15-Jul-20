import React from 'react';
import ReactDOM from 'react-dom';
import { createStore } from 'redux';

import App from './components/App';
import './index.css';
import movies from './reducers';

const store = createStore(movies)

console.log('store',store);
console.log('Before-STORE',store.getState());

store.dispatch({
    type : 'ADD Movie',
    movie : [{name : 'Superman'}]
})
console.log('Afer-STORE',store.getState());


ReactDOM.render(<App/>, document.getElementById('root'));




