import App from './App'
function Apps(props) {
    const name = props.store.key;
    console.log('name',name);
    return(
       <div>
            <h1> Hello</h1>
         
           <App    name = {name}/>
       </div>
    )
    
    
}
export default Apps;