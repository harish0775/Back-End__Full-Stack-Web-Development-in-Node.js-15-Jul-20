export default function movies(state = [],action){
    if(action.type = 'Add Movie'){
        return action.movies;
    }
    return state;
}