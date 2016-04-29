package;

import kha.System;
import kha.Scheduler;
import kha.Assets;

class Main {
	public static function main() {
		System.init({title: "Branch Ninja", width: 576, height: 324}, function () {
				new Menu();
		});
	}
}
