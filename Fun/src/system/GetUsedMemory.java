package system;

public class GetUsedMemory {
    public static void main(String[] args) {
        long beforeUsedMem=Runtime.getRuntime().totalMemory()-Runtime.getRuntime().freeMemory();
        for(int i = 0; i < 100_000; i++){
            System.out.println("Hello world!");
        }
        long afterUsedMem=Runtime.getRuntime().totalMemory()-Runtime.getRuntime().freeMemory();
        long actualMemUsed=afterUsedMem-beforeUsedMem; //in bytes
        System.out.println("Memory used = "+actualMemUsed/1024+" KB");
    }
}