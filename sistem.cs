using System;

class MinecraftSession {
    static void Main() {
        string eldekiBlok = "Toprak";
        int blokSayisi = 5;

        Console.WriteLine($"C# Kontrol: Elde {blokSayisi} tane {eldekiBlok} var.");

        while(blokSayisi > 0) {
            Console.WriteLine("Blok yerlestirildi! (Sag Tik)");
            blokSayisi--;
            Console.WriteLine($"Kalan: {blokSayisi}");
        }

        Console.WriteLine("C# Uyarisi: Elindeki bloklar bitti!");
    }
}
