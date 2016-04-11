package;

import kha.System;

class Main {
	public static function main() {
		System.init({title: "Branch Ninja", width: 576, height: 324}, function () {
			new Game();
		});
	}
}
