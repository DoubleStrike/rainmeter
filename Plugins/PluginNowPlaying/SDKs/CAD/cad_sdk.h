#ifndef __CADSDK_H__
#define __CADSDK_H__

enum IPCMESSAGE
{
	IPC_PLAY = 100,
	IPC_PLAYPAUSE = 101,
	IPC_PAUSE = 102,
	IPC_STOP = 103,
	IPC_NEXT = 104,
	IPC_PREVIOUS = 105,
	IPC_VOLUME_CHANGED_NOTIFICATION = 108,
	IPC_SET_VOLUME = 108,
	IPC_GET_VOLUME = 109,
	IPC_GET_CURRENT_TRACK = 110,
	IPC_GET_DURATION = 113,
	IPC_SET_POSITION = 114,
	IPC_SET_CALLBACK_HWND = 120,
	IPC_GET_POSITION = 122,
	IPC_TRACK_CHANGED_NOTIFICATION = 123,
	IPC_SHOW_WINDOW = 124,
	IPC_GET_STATE = 125,
	IPC_STATE_CHANGED_NOTIFICATION = 126,
	IPC_REPEAT_CHANGED_NOTIFICATION = 128,
	IPC_SET_REPEAT = 128,
	IPC_SHUTDOWN_NOTIFICATION = 129,
	IPC_GET_REPEAT = 130,
	IPC_CLOSE = 131,
	IPC_SHUFFLE_CHANGED_NOTIFICATION = 140,
	IPC_GET_SHUFFLE = 140,
	IPC_SET_SHUFFLE = 141,
	IPC_RATING_CHANGED_NOTIFICATION = 639,
	IPC_SET_RATING = 639,
	IPC_REGISTER_NOTIFICATION = 700,
	IPC_CURRENT_TRACK_NOTIFICATION = 701,
	IPC_CURRENT_LYRICS_NOTIFICATION = 702,
	IPC_NEW_LYRICS_NOTIFICATION = 703,
	IPC_NEW_COVER_NOTIFICATION = 800,
	IPC_GET_LYRICS = 801
};

#endif