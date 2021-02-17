
import java.net.*;


import java.io.*;
public class readingURL {

    public static void main(String[] args) throws Exception {
        URL oracle = new URL("http://www.oracle.com/"); //web link
        URLConnection yc = oracle.openConnection();
        BufferedReader in = new BufferedReader(new InputStreamReader(
                                    yc.getInputStream()));
        String inputLine;
        while ((inputLine = in.readLine()) != null) 
            System.out.println(inputLine);
        in.close();
        System.out.println("Connection is not found");
    }
}
