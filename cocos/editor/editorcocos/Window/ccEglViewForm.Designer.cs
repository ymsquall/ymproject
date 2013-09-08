namespace editorcocos.Window
{
    partial class ccEglViewForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.mEglViewPanel = new System.Windows.Forms.Panel();
            this.mCCAppMainProcTimer = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // mEglViewPanel
            // 
            this.mEglViewPanel.Dock = System.Windows.Forms.DockStyle.Fill;
            this.mEglViewPanel.Location = new System.Drawing.Point(0, 0);
            this.mEglViewPanel.Name = "mEglViewPanel";
            this.mEglViewPanel.Size = new System.Drawing.Size(778, 476);
            this.mEglViewPanel.TabIndex = 0;
            // 
            // mCCAppMainProcTimer
            // 
            this.mCCAppMainProcTimer.Tick += new System.EventHandler(this.CCAppMainProcTimer_Tick);
            // 
            // ccEglViewForm
            // 
            this.BackColor = System.Drawing.Color.Blue;
            this.ClientSize = new System.Drawing.Size(778, 476);
            this.Controls.Add(this.mEglViewPanel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Name = "ccEglViewForm";
            this.ShowInTaskbar = false;
            this.Tag = "XC";
            this.Text = "ccEglViewPanel";
            this.TopMost = true;
            this.Load += new System.EventHandler(this.ViewForm_Load);
            this.Resize += new System.EventHandler(this.ccEglViewPanel_Resize);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel mEglViewPanel;
        private System.Windows.Forms.Timer mCCAppMainProcTimer;
    }
}