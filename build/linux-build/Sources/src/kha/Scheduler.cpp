#include <hxcpp.h>

#ifndef INCLUDED_kha_FrameTask
#include <kha/FrameTask.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_TimeTask
#include <kha/TimeTask.h>
#endif
namespace kha{

Void Scheduler_obj::__construct()
{
	return null();
}

//Scheduler_obj::~Scheduler_obj() { }

Dynamic Scheduler_obj::__CreateEmpty() { return  new Scheduler_obj; }
hx::ObjectPtr< Scheduler_obj > Scheduler_obj::__new()
{  hx::ObjectPtr< Scheduler_obj > _result_ = new Scheduler_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scheduler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scheduler_obj > _result_ = new Scheduler_obj();
	_result_->__construct();
	return _result_;}

Array< ::Dynamic > Scheduler_obj::timeTasks;

Array< ::Dynamic > Scheduler_obj::frameTasks;

Array< ::Dynamic > Scheduler_obj::toDeleteTime;

Array< ::Dynamic > Scheduler_obj::toDeleteFrame;

Float Scheduler_obj::current;

Float Scheduler_obj::lastTime;

bool Scheduler_obj::frame_tasks_sorted;

bool Scheduler_obj::stopped;

bool Scheduler_obj::vsync;

Float Scheduler_obj::onedifhz;

int Scheduler_obj::currentFrameTaskId;

int Scheduler_obj::currentTimeTaskId;

int Scheduler_obj::currentGroupId;

int Scheduler_obj::DIF_COUNT;

Float Scheduler_obj::maxframetime;

Array< Float > Scheduler_obj::deltas;

Float Scheduler_obj::startTime;

Float Scheduler_obj::lastNow;

::kha::TimeTask Scheduler_obj::activeTimeTask;

Void Scheduler_obj::init( ){
{
		HX_STACK_FRAME("kha.Scheduler","init",0x2bf4b74d,"kha.Scheduler.init","kha/Scheduler.hx",68,0xd275db8e)
		HX_STACK_LINE(69)
		Array< Float > tmp = Array_obj< Float >::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::kha::Scheduler_obj::deltas = tmp;
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(70)
			int tmp1 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				if ((tmp3)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				Array< Float > tmp5 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				tmp5[tmp6] = (int)0;
			}
		}
		HX_STACK_LINE(72)
		::kha::Scheduler_obj::stopped = true;
		HX_STACK_LINE(73)
		::kha::Scheduler_obj::frame_tasks_sorted = true;
		HX_STACK_LINE(74)
		Float tmp1 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		::kha::Scheduler_obj::current = tmp1;
		HX_STACK_LINE(75)
		Float tmp2 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		::kha::Scheduler_obj::lastTime = tmp2;
		HX_STACK_LINE(77)
		::kha::Scheduler_obj::currentFrameTaskId = (int)0;
		HX_STACK_LINE(78)
		::kha::Scheduler_obj::currentTimeTaskId = (int)0;
		HX_STACK_LINE(79)
		::kha::Scheduler_obj::currentGroupId = (int)0;
		HX_STACK_LINE(81)
		Array< ::Dynamic > tmp3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		::kha::Scheduler_obj::timeTasks = tmp3;
		HX_STACK_LINE(82)
		Array< ::Dynamic > tmp4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::kha::Scheduler_obj::frameTasks = tmp4;
		HX_STACK_LINE(83)
		Array< ::Dynamic > tmp5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		::kha::Scheduler_obj::toDeleteTime = tmp5;
		HX_STACK_LINE(84)
		Array< ::Dynamic > tmp6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::kha::Scheduler_obj::toDeleteFrame = tmp6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,init,(void))

Void Scheduler_obj::start( hx::Null< bool >  __o_restartTimers){
bool restartTimers = __o_restartTimers.Default(false);
	HX_STACK_FRAME("kha.Scheduler","start",0x101ead85,"kha.Scheduler.start","kha/Scheduler.hx",87,0xd275db8e)
	HX_STACK_ARG(restartTimers,"restartTimers")
{
		HX_STACK_LINE(88)
		bool tmp = ::kha::System_obj::get_vsync();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		::kha::Scheduler_obj::vsync = tmp;
		HX_STACK_LINE(89)
		int tmp1 = ::kha::System_obj::get_refreshRate();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		int hz = tmp1;		HX_STACK_VAR(hz,"hz");
		HX_STACK_LINE(90)
		bool tmp2 = (hz >= (int)57);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		if ((tmp2)){
			HX_STACK_LINE(90)
			tmp3 = (hz <= (int)63);
		}
		else{
			HX_STACK_LINE(90)
			tmp3 = false;
		}
		HX_STACK_LINE(90)
		if ((tmp3)){
			HX_STACK_LINE(90)
			hz = (int)60;
		}
		HX_STACK_LINE(91)
		Float tmp4 = (Float(((Float)1.0)) / Float(hz));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::kha::Scheduler_obj::onedifhz = tmp4;
		HX_STACK_LINE(93)
		::kha::Scheduler_obj::stopped = false;
		HX_STACK_LINE(94)
		::kha::Scheduler_obj::resetTime();
		HX_STACK_LINE(95)
		Float tmp5 = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		::kha::Scheduler_obj::lastTime = tmp5;
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int tmp6 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				if ((tmp8)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(96)
				Array< Float > tmp10 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				tmp10[tmp11] = (int)0;
			}
		}
		HX_STACK_LINE(98)
		bool tmp6 = restartTimers;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		if ((tmp6)){
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				Array< ::Dynamic > tmp7 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(99)
				Array< ::Dynamic > _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(99)
				while((true)){
					HX_STACK_LINE(99)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(99)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(99)
					if ((tmp9)){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(99)
					::kha::TimeTask tmp10 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(99)
					::kha::TimeTask timeTask = tmp10;		HX_STACK_VAR(timeTask,"timeTask");
					HX_STACK_LINE(99)
					++(_g);
					HX_STACK_LINE(100)
					timeTask->paused = false;
				}
			}
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(103)
				Array< ::Dynamic > tmp7 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(103)
				Array< ::Dynamic > _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(103)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(103)
					if ((tmp9)){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(103)
					::kha::FrameTask tmp10 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(103)
					::kha::FrameTask frameTask = tmp10;		HX_STACK_VAR(frameTask,"frameTask");
					HX_STACK_LINE(103)
					++(_g);
					HX_STACK_LINE(104)
					frameTask->paused = false;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,start,(void))

Void Scheduler_obj::stop( ){
{
		HX_STACK_FRAME("kha.Scheduler","stop",0x32956c3f,"kha.Scheduler.stop","kha/Scheduler.hx",110,0xd275db8e)
		HX_STACK_LINE(110)
		::kha::Scheduler_obj::stopped = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,stop,(void))

bool Scheduler_obj::isStopped( ){
	HX_STACK_FRAME("kha.Scheduler","isStopped",0xd70a55e6,"kha.Scheduler.isStopped","kha/Scheduler.hx",113,0xd275db8e)
	HX_STACK_LINE(114)
	bool tmp = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,isStopped,return )

Void Scheduler_obj::back( Float time){
{
		HX_STACK_FRAME("kha.Scheduler","back",0x274a5664,"kha.Scheduler.back","kha/Scheduler.hx",117,0xd275db8e)
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(118)
		::kha::Scheduler_obj::lastTime = time;
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(119)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(119)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(119)
				if ((tmp2)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(120)
				bool tmp4 = (timeTask->start >= time);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				if ((tmp4)){
					HX_STACK_LINE(121)
					timeTask->next = timeTask->start;
				}
				else{
					HX_STACK_LINE(124)
					timeTask->next = timeTask->start;
					HX_STACK_LINE(125)
					while((true)){
						HX_STACK_LINE(125)
						bool tmp5 = (timeTask->next < time);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(125)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(125)
						if ((tmp6)){
							HX_STACK_LINE(125)
							break;
						}
						HX_STACK_LINE(126)
						hx::AddEq(timeTask->next,timeTask->period);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,back,(void))

Void Scheduler_obj::executeFrame( ){
{
		HX_STACK_FRAME("kha.Scheduler","executeFrame",0x3aa53ef5,"kha.Scheduler.executeFrame","kha/Scheduler.hx",132,0xd275db8e)
		HX_STACK_LINE(133)
		Float tmp = ::kha::Scheduler_obj::realTime();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(133)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(134)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float tmp2 = ::kha::Scheduler_obj::lastNow;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float delta = tmp3;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(135)
		::kha::Scheduler_obj::lastNow = now;
		HX_STACK_LINE(137)
		Float tmp4 = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		Float frameEnd = tmp4;		HX_STACK_VAR(frameEnd,"frameEnd");
		HX_STACK_LINE(139)
		bool tmp5 = (delta < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		if ((tmp5)){
			HX_STACK_LINE(140)
			return null();
		}
		HX_STACK_LINE(145)
		Float tmp6 = delta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		Float tmp7 = ::kha::Scheduler_obj::maxframetime;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(145)
		if ((tmp8)){
			HX_STACK_LINE(146)
			Float tmp9 = ::kha::Scheduler_obj::maxframetime;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(146)
			delta = tmp9;
			HX_STACK_LINE(147)
			hx::AddEq(frameEnd,delta);
		}
		else{
			HX_STACK_LINE(150)
			bool tmp9 = ::kha::Scheduler_obj::vsync;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			if ((tmp9)){
				HX_STACK_LINE(153)
				Float tmp10 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				Float realdif = tmp10;		HX_STACK_VAR(realdif,"realdif");
				HX_STACK_LINE(154)
				while((true)){
					HX_STACK_LINE(154)
					Float tmp11 = realdif;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					Float tmp12 = delta;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					Float tmp13 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(154)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(154)
					bool tmp15 = (tmp11 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(154)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(154)
					if ((tmp16)){
						HX_STACK_LINE(154)
						break;
					}
					HX_STACK_LINE(155)
					Float tmp17 = ::kha::Scheduler_obj::onedifhz;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(155)
					hx::AddEq(realdif,tmp17);
				}
				HX_STACK_LINE(158)
				delta = realdif;
				HX_STACK_LINE(159)
				{
					HX_STACK_LINE(159)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(159)
					int tmp11 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(159)
					int tmp12 = (tmp11 - (int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(159)
					int _g = tmp12;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(159)
					while((true)){
						HX_STACK_LINE(159)
						bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(159)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(159)
						if ((tmp14)){
							HX_STACK_LINE(159)
							break;
						}
						HX_STACK_LINE(159)
						int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(159)
						int i = tmp15;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(160)
						Array< Float > tmp16 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(160)
						int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(160)
						Float tmp18 = tmp16->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(160)
						hx::AddEq(delta,tmp18);
						HX_STACK_LINE(161)
						Array< Float > tmp19 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(161)
						int tmp20 = i;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(161)
						Array< Float > tmp21 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(161)
						int tmp22 = (i + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(161)
						Float tmp23 = tmp21->__get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(161)
						tmp19[tmp20] = tmp23;
					}
				}
				HX_STACK_LINE(163)
				Array< Float > tmp11 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(163)
				int tmp12 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(163)
				int tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(163)
				Float tmp14 = tmp11->__get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(163)
				hx::AddEq(delta,tmp14);
				HX_STACK_LINE(164)
				int tmp15 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(164)
				hx::DivEq(delta,tmp15);
				HX_STACK_LINE(165)
				Array< Float > tmp16 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(165)
				int tmp17 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(165)
				int tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(165)
				Float tmp19 = realdif;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(165)
				tmp16[tmp18] = tmp19;
				HX_STACK_LINE(167)
				hx::AddEq(frameEnd,delta);
			}
			else{
				HX_STACK_LINE(170)
				{
					HX_STACK_LINE(170)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(170)
					int tmp10 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					int _g = tmp11;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(170)
					while((true)){
						HX_STACK_LINE(170)
						bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(170)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(170)
						if ((tmp13)){
							HX_STACK_LINE(170)
							break;
						}
						HX_STACK_LINE(170)
						int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(170)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(171)
						Array< Float > tmp15 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(171)
						int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(171)
						Array< Float > tmp17 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(171)
						int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(171)
						Float tmp19 = tmp17->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(171)
						tmp15[tmp16] = tmp19;
					}
				}
				HX_STACK_LINE(173)
				Array< Float > tmp10 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				int tmp11 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				Float tmp13 = delta;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				tmp10[tmp12] = tmp13;
				HX_STACK_LINE(175)
				Float next = (int)0;		HX_STACK_VAR(next,"next");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(176)
					int tmp14 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(176)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(176)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(176)
						if ((tmp16)){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(176)
						int i = tmp17;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(177)
						Array< Float > tmp18 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(177)
						int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(177)
						Float tmp20 = tmp18->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(177)
						hx::AddEq(next,tmp20);
					}
				}
				HX_STACK_LINE(179)
				int tmp14 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(179)
				hx::DivEq(next,tmp14);
				HX_STACK_LINE(184)
				hx::AddEq(frameEnd,next);
			}
		}
		HX_STACK_LINE(188)
		::kha::Scheduler_obj::lastTime = frameEnd;
		HX_STACK_LINE(189)
		bool tmp9 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(189)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(189)
		if ((tmp10)){
			HX_STACK_LINE(190)
			::kha::Scheduler_obj::current = frameEnd;
		}
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(193)
			Array< ::Dynamic > _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(193)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(193)
				if ((tmp13)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				::kha::TimeTask tmp14 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(193)
				::kha::TimeTask t = tmp14;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(194)
				::kha::Scheduler_obj::activeTimeTask = t;
				HX_STACK_LINE(195)
				bool tmp15 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(195)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(195)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(195)
				if ((tmp16)){
					HX_STACK_LINE(195)
					::kha::TimeTask tmp18 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(195)
					::kha::TimeTask tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(195)
					tmp17 = tmp19->paused;
				}
				else{
					HX_STACK_LINE(195)
					tmp17 = true;
				}
				HX_STACK_LINE(195)
				if ((tmp17)){
					HX_STACK_LINE(196)
					::kha::TimeTask tmp18 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(196)
					hx::AddEq(tmp18->next,delta);
				}
				else{
					HX_STACK_LINE(198)
					::kha::TimeTask tmp18 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(198)
					Float tmp19 = tmp18->next;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(198)
					Float tmp20 = frameEnd;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(198)
					bool tmp21 = (tmp19 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(198)
					if ((tmp21)){
						HX_STACK_LINE(199)
						::kha::TimeTask tmp22 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(199)
						hx::AddEq(tmp22->next,t->period);
						HX_STACK_LINE(200)
						Array< ::Dynamic > tmp23 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(200)
						::kha::TimeTask tmp24 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(200)
						tmp23->remove(tmp24);
						HX_STACK_LINE(202)
						::kha::TimeTask tmp25 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(202)
						bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(202)
						bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(202)
						if ((tmp26)){
							HX_STACK_LINE(202)
							::kha::TimeTask tmp28 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(202)
							::kha::TimeTask tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(202)
							tmp27 = tmp29->task();
						}
						else{
							HX_STACK_LINE(202)
							tmp27 = false;
						}
						HX_STACK_LINE(202)
						if ((tmp27)){
							HX_STACK_LINE(203)
							::kha::TimeTask tmp28 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(203)
							Float tmp29 = tmp28->period;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(203)
							bool tmp30 = (tmp29 > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(203)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(203)
							if ((tmp30)){
								HX_STACK_LINE(203)
								::kha::TimeTask tmp32 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(203)
								::kha::TimeTask tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(203)
								Float tmp34 = tmp33->duration;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(203)
								bool tmp35 = (tmp34 == (int)0);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(203)
								bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(203)
								bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(203)
								bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(203)
								bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(203)
								bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(203)
								if ((tmp40)){
									HX_STACK_LINE(203)
									::kha::TimeTask tmp41 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(203)
									Float tmp44 = tmp43->duration;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp45 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(203)
									Float tmp48 = tmp47->start;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp49 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(203)
									::kha::TimeTask tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(203)
									Float tmp52 = tmp51->next;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(203)
									Float tmp53 = (tmp48 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(203)
									Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(203)
									Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(203)
									tmp31 = (tmp44 >= tmp55);
								}
								else{
									HX_STACK_LINE(203)
									tmp31 = true;
								}
							}
							else{
								HX_STACK_LINE(203)
								tmp31 = false;
							}
							HX_STACK_LINE(203)
							if ((tmp31)){
								HX_STACK_LINE(204)
								Array< ::Dynamic > tmp32 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(204)
								::kha::TimeTask tmp33 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(204)
								::kha::Scheduler_obj::insertSorted(tmp32,tmp33);
							}
						}
						else{
							HX_STACK_LINE(208)
							::kha::TimeTask tmp28 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(208)
							tmp28->active = false;
						}
					}
				}
			}
		}
		HX_STACK_LINE(212)
		::kha::Scheduler_obj::activeTimeTask = null();
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(214)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			Array< ::Dynamic > _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(214)
			while((true)){
				HX_STACK_LINE(214)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(214)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(214)
				if ((tmp13)){
					HX_STACK_LINE(214)
					break;
				}
				HX_STACK_LINE(214)
				::kha::TimeTask tmp14 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(214)
				::kha::TimeTask timeTask = tmp14;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(214)
				++(_g);
				HX_STACK_LINE(215)
				bool tmp15 = timeTask->active;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(215)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(215)
				if ((tmp16)){
					HX_STACK_LINE(216)
					Array< ::Dynamic > tmp17 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(216)
					::kha::TimeTask tmp18 = timeTask;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(216)
					tmp17->push(tmp18);
				}
			}
		}
		HX_STACK_LINE(220)
		while((true)){
			HX_STACK_LINE(220)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(220)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(220)
			if ((tmp14)){
				HX_STACK_LINE(220)
				break;
			}
			HX_STACK_LINE(221)
			Array< ::Dynamic > tmp15 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(221)
			Array< ::Dynamic > tmp16 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(221)
			::kha::TimeTask tmp17 = tmp16->pop().StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(221)
			tmp15->remove(tmp17);
		}
		HX_STACK_LINE(224)
		::kha::Scheduler_obj::sortFrameTasks();
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(225)
			Array< ::Dynamic > _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(225)
			while((true)){
				HX_STACK_LINE(225)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(225)
				if ((tmp13)){
					HX_STACK_LINE(225)
					break;
				}
				HX_STACK_LINE(225)
				::kha::FrameTask tmp14 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(225)
				::kha::FrameTask frameTask = tmp14;		HX_STACK_VAR(frameTask,"frameTask");
				HX_STACK_LINE(225)
				++(_g);
				HX_STACK_LINE(226)
				bool tmp15 = ::kha::Scheduler_obj::stopped;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(226)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(226)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(226)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(226)
				if ((tmp17)){
					HX_STACK_LINE(226)
					bool tmp19 = frameTask->paused;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(226)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(226)
					tmp18 = !(tmp20);
				}
				else{
					HX_STACK_LINE(226)
					tmp18 = false;
				}
				HX_STACK_LINE(226)
				if ((tmp18)){
					HX_STACK_LINE(227)
					bool tmp19 = frameTask->task();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(227)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(227)
					if ((tmp20)){
						HX_STACK_LINE(227)
						frameTask->active = false;
					}
				}
			}
		}
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(231)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(231)
			Array< ::Dynamic > _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(231)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(231)
				if ((tmp13)){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(231)
				::kha::FrameTask tmp14 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(231)
				::kha::FrameTask frameTask = tmp14;		HX_STACK_VAR(frameTask,"frameTask");
				HX_STACK_LINE(231)
				++(_g);
				HX_STACK_LINE(232)
				bool tmp15 = frameTask->active;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(232)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(232)
				if ((tmp16)){
					HX_STACK_LINE(233)
					Array< ::Dynamic > tmp17 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(233)
					::kha::FrameTask tmp18 = frameTask;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(233)
					tmp17->push(tmp18);
				}
			}
		}
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			Array< ::Dynamic > tmp11 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(237)
			int tmp12 = tmp11->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(237)
			bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(237)
			if ((tmp14)){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(238)
			Array< ::Dynamic > tmp15 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(238)
			Array< ::Dynamic > tmp16 = ::kha::Scheduler_obj::toDeleteFrame;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			::kha::FrameTask tmp17 = tmp16->pop().StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(238)
			tmp15->remove(tmp17);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,executeFrame,(void))

Float Scheduler_obj::time( ){
	HX_STACK_FRAME("kha.Scheduler","time",0x3336484a,"kha.Scheduler.time","kha/Scheduler.hx",242,0xd275db8e)
	HX_STACK_LINE(243)
	Float tmp = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,time,return )

Float Scheduler_obj::realTime( ){
	HX_STACK_FRAME("kha.Scheduler","realTime",0xd6422948,"kha.Scheduler.realTime","kha/Scheduler.hx",246,0xd275db8e)
	HX_STACK_LINE(247)
	Float tmp = ::kha::System_obj::get_time();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	Float tmp1 = ::kha::Scheduler_obj::startTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,realTime,return )

Void Scheduler_obj::resetTime( ){
{
		HX_STACK_FRAME("kha.Scheduler","resetTime",0x2292dc1f,"kha.Scheduler.resetTime","kha/Scheduler.hx",250,0xd275db8e)
		HX_STACK_LINE(251)
		Float tmp = ::kha::System_obj::get_time();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		Float now = tmp;		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(252)
		::kha::Scheduler_obj::lastNow = (int)0;
		HX_STACK_LINE(253)
		Float tmp1 = now;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		Float tmp2 = ::kha::Scheduler_obj::startTime;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		Float dif = tmp3;		HX_STACK_VAR(dif,"dif");
		HX_STACK_LINE(254)
		::kha::Scheduler_obj::startTime = now;
		HX_STACK_LINE(255)
		{
			HX_STACK_LINE(255)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			Array< ::Dynamic > tmp4 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(255)
			Array< ::Dynamic > _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(255)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				if ((tmp6)){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(255)
				::kha::TimeTask tmp7 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				::kha::TimeTask timeTask = tmp7;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(255)
				++(_g);
				HX_STACK_LINE(256)
				hx::SubEq(timeTask->start,dif);
				HX_STACK_LINE(257)
				hx::SubEq(timeTask->next,dif);
			}
		}
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(259)
			int tmp4 = ::kha::Scheduler_obj::DIF_COUNT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(259)
			while((true)){
				HX_STACK_LINE(259)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(259)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(259)
				if ((tmp6)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(259)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(259)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(259)
				Array< Float > tmp8 = ::kha::Scheduler_obj::deltas;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(259)
				int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(259)
				tmp8[tmp9] = (int)0;
			}
		}
		HX_STACK_LINE(260)
		::kha::Scheduler_obj::current = (int)0;
		HX_STACK_LINE(261)
		::kha::Scheduler_obj::lastTime = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,resetTime,(void))

int Scheduler_obj::addBreakableFrameTask( Dynamic task,int priority){
	HX_STACK_FRAME("kha.Scheduler","addBreakableFrameTask",0x44621e9d,"kha.Scheduler.addBreakableFrameTask","kha/Scheduler.hx",264,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_LINE(265)
	Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	Dynamic tmp1 = task;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	int tmp2 = priority;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	int tmp3 = ++(::kha::Scheduler_obj::currentFrameTaskId);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	::kha::FrameTask tmp4 = ::kha::FrameTask_obj::__new(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(265)
	tmp->push(tmp4);
	HX_STACK_LINE(266)
	::kha::Scheduler_obj::frame_tasks_sorted = false;
	HX_STACK_LINE(267)
	int tmp5 = ::kha::Scheduler_obj::currentFrameTaskId;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(267)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,addBreakableFrameTask,return )

int Scheduler_obj::addFrameTask( Dynamic task,int priority){
	HX_STACK_FRAME("kha.Scheduler","addFrameTask",0xb36720ee,"kha.Scheduler.addFrameTask","kha/Scheduler.hx",270,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_LINE(271)
	int tmp = priority;		HX_STACK_VAR(tmp,"tmp");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,task)
	int __ArgCount() const { return 0; }
	bool run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",271,0xd275db8e)
		{
			HX_STACK_LINE(271)
			task().Cast< Void >();
			HX_STACK_LINE(271)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(271)
	int tmp1 = ::kha::Scheduler_obj::addBreakableFrameTask( Dynamic(new _Function_1_1(task)),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,addFrameTask,return )

Void Scheduler_obj::pauseFrameTask( int id,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseFrameTask",0xfc4302b9,"kha.Scheduler.pauseFrameTask","kha/Scheduler.hx",275,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(275)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(275)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(275)
		while((true)){
			HX_STACK_LINE(275)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(275)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(275)
			if ((tmp2)){
				HX_STACK_LINE(275)
				break;
			}
			HX_STACK_LINE(275)
			::kha::FrameTask tmp3 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			::kha::FrameTask frameTask = tmp3;		HX_STACK_VAR(frameTask,"frameTask");
			HX_STACK_LINE(275)
			++(_g);
			HX_STACK_LINE(276)
			bool tmp4 = (frameTask->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			if ((tmp4)){
				HX_STACK_LINE(277)
				frameTask->paused = paused;
				HX_STACK_LINE(278)
				break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseFrameTask,(void))

Void Scheduler_obj::removeFrameTask( int id){
{
		HX_STACK_FRAME("kha.Scheduler","removeFrameTask",0x21b33c11,"kha.Scheduler.removeFrameTask","kha/Scheduler.hx",284,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(284)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(284)
		Array< ::Dynamic > tmp = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			if ((tmp2)){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(284)
			::kha::FrameTask tmp3 = _g1->__get(_g).StaticCast< ::kha::FrameTask >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			::kha::FrameTask frameTask = tmp3;		HX_STACK_VAR(frameTask,"frameTask");
			HX_STACK_LINE(284)
			++(_g);
			HX_STACK_LINE(285)
			bool tmp4 = (frameTask->id == id);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(285)
			if ((tmp4)){
				HX_STACK_LINE(286)
				frameTask->active = false;
				HX_STACK_LINE(287)
				Array< ::Dynamic > tmp5 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(287)
				::kha::FrameTask tmp6 = frameTask;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				tmp5->remove(tmp6);
				HX_STACK_LINE(288)
				break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeFrameTask,(void))

int Scheduler_obj::generateGroupId( ){
	HX_STACK_FRAME("kha.Scheduler","generateGroupId",0x08ceed28,"kha.Scheduler.generateGroupId","kha/Scheduler.hx",293,0xd275db8e)
	HX_STACK_LINE(294)
	int tmp = ++(::kha::Scheduler_obj::currentGroupId);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,generateGroupId,return )

int Scheduler_obj::addBreakableTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addBreakableTimeTaskToGroup",0x55e602bd,"kha.Scheduler.addBreakableTimeTaskToGroup","kha/Scheduler.hx",297,0xd275db8e)
	HX_STACK_ARG(groupId,"groupId")
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(298)
		::kha::TimeTask t = ::kha::TimeTask_obj::__new();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(299)
		t->active = true;
		HX_STACK_LINE(300)
		t->task = task;
		HX_STACK_LINE(301)
		int tmp = ++(::kha::Scheduler_obj::currentTimeTaskId);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		t->id = tmp;
		HX_STACK_LINE(302)
		t->groupId = groupId;
		HX_STACK_LINE(304)
		Float tmp1 = ::kha::Scheduler_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		Float tmp2 = start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		t->start = tmp3;
		HX_STACK_LINE(305)
		t->period = (int)0;
		HX_STACK_LINE(306)
		bool tmp4 = (period != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		if ((tmp4)){
			HX_STACK_LINE(306)
			t->period = period;
		}
		HX_STACK_LINE(308)
		t->duration = (int)0;
		HX_STACK_LINE(309)
		bool tmp5 = (duration != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(309)
		if ((tmp5)){
			HX_STACK_LINE(309)
			Float tmp6 = (t->start + duration);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			t->duration = tmp6;
		}
		HX_STACK_LINE(311)
		t->next = t->start;
		HX_STACK_LINE(312)
		Array< ::Dynamic > tmp6 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(312)
		::kha::TimeTask tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(312)
		::kha::Scheduler_obj::insertSorted(tmp6,tmp7);
		HX_STACK_LINE(313)
		int tmp8 = t->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scheduler_obj,addBreakableTimeTaskToGroup,return )

int Scheduler_obj::addTimeTaskToGroup( int groupId,Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addTimeTaskToGroup",0xa9e317ce,"kha.Scheduler.addTimeTaskToGroup","kha/Scheduler.hx",316,0xd275db8e)
	HX_STACK_ARG(groupId,"groupId")
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(317)
		int tmp = groupId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(317)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,task)
		int __ArgCount() const { return 0; }
		bool run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",317,0xd275db8e)
			{
				HX_STACK_LINE(317)
				task().Cast< Void >();
				HX_STACK_LINE(317)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(317)
		int tmp4 = ::kha::Scheduler_obj::addBreakableTimeTaskToGroup(tmp, Dynamic(new _Function_1_1(task)),tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(317)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Scheduler_obj,addTimeTaskToGroup,return )

int Scheduler_obj::addBreakableTimeTask( Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addBreakableTimeTask",0x71683bc7,"kha.Scheduler.addBreakableTimeTask","kha/Scheduler.hx",320,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(321)
		Dynamic tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		int tmp4 = ::kha::Scheduler_obj::addBreakableTimeTaskToGroup((int)0,tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scheduler_obj,addBreakableTimeTask,return )

int Scheduler_obj::addTimeTask( Dynamic task,Float start,hx::Null< Float >  __o_period,hx::Null< Float >  __o_duration){
Float period = __o_period.Default(0);
Float duration = __o_duration.Default(0);
	HX_STACK_FRAME("kha.Scheduler","addTimeTask",0x71e7ae96,"kha.Scheduler.addTimeTask","kha/Scheduler.hx",324,0xd275db8e)
	HX_STACK_ARG(task,"task")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(period,"period")
	HX_STACK_ARG(duration,"duration")
{
		HX_STACK_LINE(325)
		Dynamic tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		Float tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		Float tmp2 = period;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		int tmp4 = ::kha::Scheduler_obj::addTimeTaskToGroup((int)0,tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(325)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Scheduler_obj,addTimeTask,return )

::kha::TimeTask Scheduler_obj::getTimeTask( int id){
	HX_STACK_FRAME("kha.Scheduler","getTimeTask",0x667f3a0b,"kha.Scheduler.getTimeTask","kha/Scheduler.hx",328,0xd275db8e)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(329)
	::kha::TimeTask tmp = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(329)
	if ((tmp1)){
		HX_STACK_LINE(329)
		::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		::kha::TimeTask tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		int tmp5 = tmp4->id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		int tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(329)
		tmp2 = false;
	}
	HX_STACK_LINE(329)
	if ((tmp2)){
		HX_STACK_LINE(329)
		::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		return tmp3;
	}
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		Array< ::Dynamic > tmp3 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		Array< ::Dynamic > _g1 = tmp3;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			if ((tmp5)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(330)
			::kha::TimeTask tmp6 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(330)
			::kha::TimeTask timeTask = tmp6;		HX_STACK_VAR(timeTask,"timeTask");
			HX_STACK_LINE(330)
			++(_g);
			HX_STACK_LINE(331)
			bool tmp7 = (timeTask->id == id);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(331)
			if ((tmp7)){
				HX_STACK_LINE(332)
				::kha::TimeTask tmp8 = timeTask;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(332)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(335)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,getTimeTask,return )

Void Scheduler_obj::pauseTimeTask( int id,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseTimeTask",0xa3984f2b,"kha.Scheduler.pauseTimeTask","kha/Scheduler.hx",338,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(339)
		int tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		::kha::TimeTask tmp1 = ::kha::Scheduler_obj::getTimeTask(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		::kha::TimeTask timeTask = tmp1;		HX_STACK_VAR(timeTask,"timeTask");
		HX_STACK_LINE(340)
		bool tmp2 = (timeTask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(340)
		if ((tmp2)){
			HX_STACK_LINE(341)
			timeTask->paused = paused;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseTimeTask,(void))

Void Scheduler_obj::pauseTimeTasks( int groupId,bool paused){
{
		HX_STACK_FRAME("kha.Scheduler","pauseTimeTasks",0x81acf6e8,"kha.Scheduler.pauseTimeTasks","kha/Scheduler.hx",345,0xd275db8e)
		HX_STACK_ARG(groupId,"groupId")
		HX_STACK_ARG(paused,"paused")
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(346)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(346)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(346)
			while((true)){
				HX_STACK_LINE(346)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(346)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(346)
				if ((tmp2)){
					HX_STACK_LINE(346)
					break;
				}
				HX_STACK_LINE(346)
				::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(346)
				::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(346)
				++(_g);
				HX_STACK_LINE(347)
				bool tmp4 = (timeTask->groupId == groupId);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(347)
				if ((tmp4)){
					HX_STACK_LINE(348)
					timeTask->paused = paused;
				}
			}
		}
		HX_STACK_LINE(351)
		::kha::TimeTask tmp = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		if ((tmp1)){
			HX_STACK_LINE(351)
			::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			::kha::TimeTask tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			int tmp5 = tmp4->groupId;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			int tmp6 = groupId;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(351)
			tmp2 = false;
		}
		HX_STACK_LINE(351)
		if ((tmp2)){
			HX_STACK_LINE(352)
			::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			tmp3->paused = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,pauseTimeTasks,(void))

Void Scheduler_obj::removeTimeTask( int id){
{
		HX_STACK_FRAME("kha.Scheduler","removeTimeTask",0x701a88d3,"kha.Scheduler.removeTimeTask","kha/Scheduler.hx",356,0xd275db8e)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(357)
		int tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::kha::TimeTask tmp1 = ::kha::Scheduler_obj::getTimeTask(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		::kha::TimeTask timeTask = tmp1;		HX_STACK_VAR(timeTask,"timeTask");
		HX_STACK_LINE(358)
		bool tmp2 = (timeTask != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(358)
		if ((tmp2)){
			HX_STACK_LINE(359)
			timeTask->active = false;
			HX_STACK_LINE(360)
			Array< ::Dynamic > tmp3 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			::kha::TimeTask tmp4 = timeTask;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			tmp3->remove(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeTimeTask,(void))

Void Scheduler_obj::removeTimeTasks( int groupId){
{
		HX_STACK_FRAME("kha.Scheduler","removeTimeTasks",0xa71d3040,"kha.Scheduler.removeTimeTasks","kha/Scheduler.hx",364,0xd275db8e)
		HX_STACK_ARG(groupId,"groupId")
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(365)
			Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			Array< ::Dynamic > _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(365)
			while((true)){
				HX_STACK_LINE(365)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(365)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				if ((tmp2)){
					HX_STACK_LINE(365)
					break;
				}
				HX_STACK_LINE(365)
				::kha::TimeTask tmp3 = _g1->__get(_g).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(365)
				::kha::TimeTask timeTask = tmp3;		HX_STACK_VAR(timeTask,"timeTask");
				HX_STACK_LINE(365)
				++(_g);
				HX_STACK_LINE(366)
				bool tmp4 = (timeTask->groupId == groupId);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				if ((tmp4)){
					HX_STACK_LINE(367)
					timeTask->active = false;
					HX_STACK_LINE(368)
					Array< ::Dynamic > tmp5 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(368)
					::kha::TimeTask tmp6 = timeTask;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(368)
					tmp5->push(tmp6);
				}
			}
		}
		HX_STACK_LINE(371)
		::kha::TimeTask tmp = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(371)
			::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(371)
			::kha::TimeTask tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(371)
			int tmp5 = tmp4->groupId;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(371)
			int tmp6 = groupId;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(371)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(371)
			tmp2 = false;
		}
		HX_STACK_LINE(371)
		if ((tmp2)){
			HX_STACK_LINE(372)
			::kha::TimeTask tmp3 = ::kha::Scheduler_obj::activeTimeTask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			tmp3->paused = false;
		}
		HX_STACK_LINE(375)
		while((true)){
			HX_STACK_LINE(375)
			Array< ::Dynamic > tmp3 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			if ((tmp6)){
				HX_STACK_LINE(375)
				break;
			}
			HX_STACK_LINE(376)
			Array< ::Dynamic > tmp7 = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(376)
			Array< ::Dynamic > tmp8 = ::kha::Scheduler_obj::toDeleteTime;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(376)
			::kha::TimeTask tmp9 = tmp8->pop().StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(376)
			tmp7->remove(tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scheduler_obj,removeTimeTasks,(void))

int Scheduler_obj::numTasksInSchedule( ){
	HX_STACK_FRAME("kha.Scheduler","numTasksInSchedule",0x5bfae3e1,"kha.Scheduler.numTasksInSchedule","kha/Scheduler.hx",380,0xd275db8e)
	HX_STACK_LINE(381)
	Array< ::Dynamic > tmp = ::kha::Scheduler_obj::timeTasks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	Array< ::Dynamic > tmp2 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	int tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(381)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,numTasksInSchedule,return )

Void Scheduler_obj::insertSorted( Array< ::Dynamic > list,::kha::TimeTask task){
{
		HX_STACK_FRAME("kha.Scheduler","insertSorted",0x20607c93,"kha.Scheduler.insertSorted","kha/Scheduler.hx",384,0xd275db8e)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(task,"task")
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(385)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(385)
			while((true)){
				HX_STACK_LINE(385)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(385)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(385)
				if ((tmp1)){
					HX_STACK_LINE(385)
					break;
				}
				HX_STACK_LINE(385)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(385)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(386)
				::kha::TimeTask tmp3 = list->__get(i).StaticCast< ::kha::TimeTask >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(386)
				Float tmp4 = tmp3->next;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(386)
				Float tmp5 = task->next;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(386)
				bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(386)
				if ((tmp6)){
					HX_STACK_LINE(387)
					int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(387)
					::kha::TimeTask tmp8 = task;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(387)
					list->insert(tmp7,tmp8);
					HX_STACK_LINE(388)
					return null();
				}
			}
		}
		HX_STACK_LINE(391)
		::kha::TimeTask tmp = task;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		list->push(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scheduler_obj,insertSorted,(void))

Void Scheduler_obj::sortFrameTasks( ){
{
		HX_STACK_FRAME("kha.Scheduler","sortFrameTasks",0xfb8e299c,"kha.Scheduler.sortFrameTasks","kha/Scheduler.hx",394,0xd275db8e)
		HX_STACK_LINE(395)
		bool tmp = ::kha::Scheduler_obj::frame_tasks_sorted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		if ((tmp)){
			HX_STACK_LINE(395)
			return null();
		}
		HX_STACK_LINE(396)
		Array< ::Dynamic > tmp1 = ::kha::Scheduler_obj::frameTasks;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::kha::FrameTask a,::kha::FrameTask b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","kha/Scheduler.hx",396,0xd275db8e)
			HX_STACK_ARG(a,"a")
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(396)
				bool tmp2 = (a->priority > b->priority);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(396)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(396)
				if ((tmp2)){
					HX_STACK_LINE(396)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(396)
					bool tmp4 = (a->priority < b->priority);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(396)
					if ((tmp4)){
						HX_STACK_LINE(396)
						tmp3 = (int)-1;
					}
					else{
						HX_STACK_LINE(396)
						tmp3 = (int)0;
					}
				}
				HX_STACK_LINE(396)
				return tmp3;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(396)
		tmp1->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(397)
		::kha::Scheduler_obj::frame_tasks_sorted = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scheduler_obj,sortFrameTasks,(void))


Scheduler_obj::Scheduler_obj()
{
}

bool Scheduler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"back") ) { outValue = back_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vsync") ) { outValue = vsync; return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"deltas") ) { outValue = deltas; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
		if (HX_FIELD_EQ(inName,"stopped") ) { outValue = stopped; return true;  }
		if (HX_FIELD_EQ(inName,"lastNow") ) { outValue = lastNow; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { outValue = lastTime; return true;  }
		if (HX_FIELD_EQ(inName,"onedifhz") ) { outValue = onedifhz; return true;  }
		if (HX_FIELD_EQ(inName,"realTime") ) { outValue = realTime_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeTasks") ) { outValue = timeTasks; return true;  }
		if (HX_FIELD_EQ(inName,"DIF_COUNT") ) { outValue = DIF_COUNT; return true;  }
		if (HX_FIELD_EQ(inName,"startTime") ) { outValue = startTime; return true;  }
		if (HX_FIELD_EQ(inName,"isStopped") ) { outValue = isStopped_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resetTime") ) { outValue = resetTime_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameTasks") ) { outValue = frameTasks; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTimeTask") ) { outValue = addTimeTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTimeTask") ) { outValue = getTimeTask_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toDeleteTime") ) { outValue = toDeleteTime; return true;  }
		if (HX_FIELD_EQ(inName,"maxframetime") ) { outValue = maxframetime; return true;  }
		if (HX_FIELD_EQ(inName,"executeFrame") ) { outValue = executeFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addFrameTask") ) { outValue = addFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"insertSorted") ) { outValue = insertSorted_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toDeleteFrame") ) { outValue = toDeleteFrame; return true;  }
		if (HX_FIELD_EQ(inName,"pauseTimeTask") ) { outValue = pauseTimeTask_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentGroupId") ) { outValue = currentGroupId; return true;  }
		if (HX_FIELD_EQ(inName,"activeTimeTask") ) { outValue = activeTimeTask; return true;  }
		if (HX_FIELD_EQ(inName,"pauseFrameTask") ) { outValue = pauseFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseTimeTasks") ) { outValue = pauseTimeTasks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeTimeTask") ) { outValue = removeTimeTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sortFrameTasks") ) { outValue = sortFrameTasks_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeFrameTask") ) { outValue = removeFrameTask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateGroupId") ) { outValue = generateGroupId_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeTimeTasks") ) { outValue = removeTimeTasks_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentTimeTaskId") ) { outValue = currentTimeTaskId; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"frame_tasks_sorted") ) { outValue = frame_tasks_sorted; return true;  }
		if (HX_FIELD_EQ(inName,"currentFrameTaskId") ) { outValue = currentFrameTaskId; return true;  }
		if (HX_FIELD_EQ(inName,"addTimeTaskToGroup") ) { outValue = addTimeTaskToGroup_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"numTasksInSchedule") ) { outValue = numTasksInSchedule_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBreakableTimeTask") ) { outValue = addBreakableTimeTask_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addBreakableFrameTask") ) { outValue = addBreakableFrameTask_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"addBreakableTimeTaskToGroup") ) { outValue = addBreakableTimeTaskToGroup_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::timeTasks,HX_HCSTRING("timeTasks","\x41","\x72","\xe1","\xbf")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::frameTasks,HX_HCSTRING("frameTasks","\x21","\xd2","\x16","\xee")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::toDeleteTime,HX_HCSTRING("toDeleteTime","\x33","\xdb","\x28","\x42")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Scheduler_obj::toDeleteFrame,HX_HCSTRING("toDeleteFrame","\x47","\xaa","\xe4","\x97")},
	{hx::fsFloat,(void *) &Scheduler_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsFloat,(void *) &Scheduler_obj::lastTime,HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0")},
	{hx::fsBool,(void *) &Scheduler_obj::frame_tasks_sorted,HX_HCSTRING("frame_tasks_sorted","\xa0","\xb7","\x4e","\xb9")},
	{hx::fsBool,(void *) &Scheduler_obj::stopped,HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43")},
	{hx::fsBool,(void *) &Scheduler_obj::vsync,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d")},
	{hx::fsFloat,(void *) &Scheduler_obj::onedifhz,HX_HCSTRING("onedifhz","\x6d","\x1e","\xeb","\xe6")},
	{hx::fsInt,(void *) &Scheduler_obj::currentFrameTaskId,HX_HCSTRING("currentFrameTaskId","\xd4","\xca","\x7c","\xdd")},
	{hx::fsInt,(void *) &Scheduler_obj::currentTimeTaskId,HX_HCSTRING("currentTimeTaskId","\x06","\xe4","\x97","\xfc")},
	{hx::fsInt,(void *) &Scheduler_obj::currentGroupId,HX_HCSTRING("currentGroupId","\xc1","\xf5","\x8b","\x94")},
	{hx::fsInt,(void *) &Scheduler_obj::DIF_COUNT,HX_HCSTRING("DIF_COUNT","\xd1","\xab","\x99","\x7a")},
	{hx::fsFloat,(void *) &Scheduler_obj::maxframetime,HX_HCSTRING("maxframetime","\x96","\xdf","\x54","\x45")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &Scheduler_obj::deltas,HX_HCSTRING("deltas","\x7b","\x11","\xe4","\x6a")},
	{hx::fsFloat,(void *) &Scheduler_obj::startTime,HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsFloat,(void *) &Scheduler_obj::lastNow,HX_HCSTRING("lastNow","\x60","\x20","\xa9","\xd7")},
	{hx::fsObject /*::kha::TimeTask*/ ,(void *) &Scheduler_obj::activeTimeTask,HX_HCSTRING("activeTimeTask","\xd8","\x75","\xb0","\x05")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scheduler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scheduler_obj::timeTasks,"timeTasks");
	HX_MARK_MEMBER_NAME(Scheduler_obj::frameTasks,"frameTasks");
	HX_MARK_MEMBER_NAME(Scheduler_obj::toDeleteTime,"toDeleteTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::toDeleteFrame,"toDeleteFrame");
	HX_MARK_MEMBER_NAME(Scheduler_obj::current,"current");
	HX_MARK_MEMBER_NAME(Scheduler_obj::lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::frame_tasks_sorted,"frame_tasks_sorted");
	HX_MARK_MEMBER_NAME(Scheduler_obj::stopped,"stopped");
	HX_MARK_MEMBER_NAME(Scheduler_obj::vsync,"vsync");
	HX_MARK_MEMBER_NAME(Scheduler_obj::onedifhz,"onedifhz");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentFrameTaskId,"currentFrameTaskId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentTimeTaskId,"currentTimeTaskId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::currentGroupId,"currentGroupId");
	HX_MARK_MEMBER_NAME(Scheduler_obj::DIF_COUNT,"DIF_COUNT");
	HX_MARK_MEMBER_NAME(Scheduler_obj::maxframetime,"maxframetime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::deltas,"deltas");
	HX_MARK_MEMBER_NAME(Scheduler_obj::startTime,"startTime");
	HX_MARK_MEMBER_NAME(Scheduler_obj::lastNow,"lastNow");
	HX_MARK_MEMBER_NAME(Scheduler_obj::activeTimeTask,"activeTimeTask");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scheduler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::timeTasks,"timeTasks");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::frameTasks,"frameTasks");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::toDeleteTime,"toDeleteTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::toDeleteFrame,"toDeleteFrame");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::frame_tasks_sorted,"frame_tasks_sorted");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::stopped,"stopped");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::vsync,"vsync");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::onedifhz,"onedifhz");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentFrameTaskId,"currentFrameTaskId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentTimeTaskId,"currentTimeTaskId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::currentGroupId,"currentGroupId");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::DIF_COUNT,"DIF_COUNT");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::maxframetime,"maxframetime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::deltas,"deltas");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::startTime,"startTime");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::lastNow,"lastNow");
	HX_VISIT_MEMBER_NAME(Scheduler_obj::activeTimeTask,"activeTimeTask");
};

#endif

hx::Class Scheduler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("timeTasks","\x41","\x72","\xe1","\xbf"),
	HX_HCSTRING("frameTasks","\x21","\xd2","\x16","\xee"),
	HX_HCSTRING("toDeleteTime","\x33","\xdb","\x28","\x42"),
	HX_HCSTRING("toDeleteFrame","\x47","\xaa","\xe4","\x97"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("lastTime","\x83","\xe5","\x45","\xe0"),
	HX_HCSTRING("frame_tasks_sorted","\xa0","\xb7","\x4e","\xb9"),
	HX_HCSTRING("stopped","\x0d","\xd2","\x61","\x43"),
	HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"),
	HX_HCSTRING("onedifhz","\x6d","\x1e","\xeb","\xe6"),
	HX_HCSTRING("currentFrameTaskId","\xd4","\xca","\x7c","\xdd"),
	HX_HCSTRING("currentTimeTaskId","\x06","\xe4","\x97","\xfc"),
	HX_HCSTRING("currentGroupId","\xc1","\xf5","\x8b","\x94"),
	HX_HCSTRING("DIF_COUNT","\xd1","\xab","\x99","\x7a"),
	HX_HCSTRING("maxframetime","\x96","\xdf","\x54","\x45"),
	HX_HCSTRING("deltas","\x7b","\x11","\xe4","\x6a"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("lastNow","\x60","\x20","\xa9","\xd7"),
	HX_HCSTRING("activeTimeTask","\xd8","\x75","\xb0","\x05"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("isStopped","\x43","\x4f","\x60","\x47"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("executeFrame","\xb8","\xbd","\x09","\xc1"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("realTime","\x8b","\x4a","\x29","\x10"),
	HX_HCSTRING("resetTime","\x7c","\xd5","\xe8","\x92"),
	HX_HCSTRING("addBreakableFrameTask","\x7a","\x2f","\x37","\xf1"),
	HX_HCSTRING("addFrameTask","\xb1","\x9f","\xcb","\x39"),
	HX_HCSTRING("pauseFrameTask","\x3c","\xf8","\xd6","\x43"),
	HX_HCSTRING("removeFrameTask","\x2e","\x19","\x96","\x7b"),
	HX_HCSTRING("generateGroupId","\x45","\xca","\xb1","\x62"),
	HX_HCSTRING("addBreakableTimeTaskToGroup","\x5a","\x97","\xee","\x0d"),
	HX_HCSTRING("addTimeTaskToGroup","\xd1","\x8a","\x93","\x50"),
	HX_HCSTRING("addBreakableTimeTask","\x8a","\xb5","\x5d","\x7b"),
	HX_HCSTRING("addTimeTask","\x33","\x79","\xb4","\x1e"),
	HX_HCSTRING("getTimeTask","\xa8","\x04","\x4c","\x13"),
	HX_HCSTRING("pauseTimeTask","\x08","\xbb","\x22","\xb5"),
	HX_HCSTRING("pauseTimeTasks","\x6b","\xec","\x40","\xc9"),
	HX_HCSTRING("removeTimeTask","\x56","\x7e","\xae","\xb7"),
	HX_HCSTRING("removeTimeTasks","\x5d","\x0d","\x00","\x01"),
	HX_HCSTRING("numTasksInSchedule","\xe4","\x56","\xab","\x02"),
	HX_HCSTRING("insertSorted","\x56","\xfb","\xc4","\xa6"),
	HX_HCSTRING("sortFrameTasks","\x1f","\x1f","\x22","\x43"),
	::String(null()) };

void Scheduler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Scheduler","\x51","\x4d","\x26","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scheduler_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Scheduler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Scheduler_obj::__boot()
{
	DIF_COUNT= (int)3;
	maxframetime= ((Float)0.5);
	startTime= ((Float)0);
	lastNow= ((Float)0);
	activeTimeTask= null();
}

} // end namespace kha
