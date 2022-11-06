// Your First Program
import java.util.Stack;
import java.util.Timer;
import java.util.TimerTask;
import java.util.concurrent.atomic.AtomicInteger;

class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!"); 

        Stack<Plate> stack = new Stack<>();

		Timer timer = new Timer("SmartyCoder Timer");

		final AtomicInteger plateIndex = new AtomicInteger();

		TimerTask putOnTopOfPlatesTask = new TimerTask() {

			@Override
			public void run() {

				Plate plate = new Plate(plateIndex.incrementAndGet());

				plate.setClean(false);

				stack.push(plate);

				System.out.println("Bir adet kirli tabak eklendi. Tabak id: " + plate.getId());

			}
		};

		// dirtyfy one plate every second
		timer.scheduleAtFixedRate(putOnTopOfPlatesTask, 100, 2000);

		TimerTask cleanPlate = new TimerTask() {

			@Override
			public void run() {

				Plate plate = stack.pop();

				plate.setClean(true);

				System.out.println(plate.getId() + " id'li tabak temizlendi. Kalan kirli tabak sayisi: " + stack.size());
			}
		};

		timer.scheduleAtFixedRate(cleanPlate, 1000, 2000);


    }

}