//relative layout 

<RelativeLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/btn"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_centerInParent="true"
        android:text="STUDENT OF SLIET longowal"
        tools:ignore="InvalidId" />

    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:backgroundTint="#3D56DF"
        android:text="priyanshu"
        android:layout_above="@id/btn"
        android:layout_centerHorizontal="true"
        />

</RelativeLayout>

// linear layout

<LinearLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity"
    android:orientation="vertical"
    android:gravity="center_horizontal">

    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:backgroundTint="@color/purple_200"
        android:text="abc"
        />
    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:backgroundTint="@color/purple_200"
        android:text="def"
        />
    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:backgroundTint="@color/purple_200"
        android:text="ghi"
        />
    <TextView
        android:layout_width="100dp"
        android:layout_height="50dp"
        android:text="this is a button system"

        />

</LinearLayout>

//image view

<LinearLayout
    xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity"
    android:orientation="vertical"
    android:padding="12dp"
    android:gravity="center_horizontal">

    <ImageView
        android:layout_width="match_parent"
        android:layout_height="200dp"
        android:scaleType="fitXY"
        android:src="@drawable/_79yr7bbraf51__1_"
        android:contentDescription="@string/hello"/>

    <TextView
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:text="@string/details"
        android:textSize="15sp"
        android:textStyle="bold"
        android:layout_marginHorizontal="22dp"/>

    <EditText
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="text"
        android:hint="enter your name"
        />
    <EditText
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:ems="10"
        android:inputType="textPassword"
        android:hint="enter your passcode"
        />
    <Button
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:backgroundTint="#4258D1"
        android:text="@string/hello"/>

</LinearLayout>






























