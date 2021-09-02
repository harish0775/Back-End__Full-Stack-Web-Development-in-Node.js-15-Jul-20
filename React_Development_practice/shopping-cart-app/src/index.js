import React from "react";
import ReactDOM from "react-dom";
import "./index.css";
import App from "./App";
import * as serviceWorker from "./serviceWorker";
import * as firebase from 'firebase/app';
import "firebase/firestore";
const firebaseConfig = {
    apiKey: "AIzaSyBxAUFGKwmNl3e9lyl2IR8zTlgcxIemYXo",
    databaseURL: "https://cn-cart.firebaseio.com",
    authDomain: "shopping-cart-734df.firebaseapp.com",
    projectId: "shopping-cart-734df",
    storageBucket: "shopping-cart-734df.appspot.com",
    messagingSenderId: "607490469026",
    appId: "1:607490469026:web:2c23e9a2621001ea11fbfb"
  };
// Initialize Firebase
firebase.initializeApp(firebaseConfig);


ReactDOM.render(<App />, document.getElementById("root"));

// If you want your app to work offline and load faster, you can change
// unregister() to register() below. Note this comes with some pitfalls.
// Learn more about service workers: https://bit.ly/CRA-PWA
serviceWorker.unregister();