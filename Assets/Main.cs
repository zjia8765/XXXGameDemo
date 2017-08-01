using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
using UnityEngine.UI;
using AOT;

public class Main : MonoBehaviour {

	public static string labelValue = "";
	// Use this for initialization

	[DllImport("__Internal")]
	private static extern string getuserInfo ();


	[DllImport("__Internal")]
	private static extern void showAlertWithContent (string content);

	delegate int CallBack(string param);  
	[DllImport("__Internal")]
	static extern void loginWithFinishCallBack(CallBack cb);
	[MonoPInvokeCallback(typeof(CallBack))]  

	static int UnityLoginFinsihCallBack(string param) {  
		Main.labelValue = param;
		Debug.Log("LoginFinsih>>>>>" + param);  
		return 100;
	}  

	void Start () {
		loginWithFinishCallBack (Main.UnityLoginFinsihCallBack);
	}

	// Update is called once per frame
	void Update () {

	}

	void OnGUI() {
		if(GUI.Button(new Rect(20,60,120,60),"获取用户信息"))
		{
			string info = getuserInfo ();
			Debug.Log ("userInfo>>>>>"+info);
			labelValue = info;
		}	

		if(GUI.Button(new Rect(20,140,120,60),"showAlert"))
		{
			showAlertWithContent ("unity调用iOS方法");
		}	

		var TextStyle = new GUIStyle();
		TextStyle.normal.textColor = Color.black;
		TextStyle.fontSize = 20;
		GUI.Label (new Rect (20, 240, 800, 600),labelValue,TextStyle);
	}

	void updateLabelContent(string content)
	{
		labelValue = content;
	}

}
